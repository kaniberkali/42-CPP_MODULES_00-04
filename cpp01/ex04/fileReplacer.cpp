#include "fileReplacer.hpp"

FileReplacer::FileReplacer(std::string infile, std::string outfile, std::string search, std::string replace)
{
    std::ifstream   fs(infile);
    this->read = false;
    this->content = "";
    if (fs.is_open())
    {
        std::string content;
        if (std::getline(fs, content, '\0')) {
            std::ofstream   ofs(outfile);
            size_t          pos = content.find(search);
            while (pos != std::string::npos) {
                content.erase(pos, search.length());
                content.insert(pos, replace);
                pos = content.find(search);
            }
            this->content = content;
            this->read = true;
            ofs << content;
            ofs.close();
        }
        else
            this->error = "Empty file found.";
        fs.close();
    }
    else
        this->error = "Unable to open the file.";
}

FileReplacer::~FileReplacer()
{
    
}

std::string FileReplacer::getContent(void)
{
    return this->content;
}

std::string FileReplacer::getError(void)
{
    return this->error;
}

bool        FileReplacer::isRead(void)
{
    return this->read;
}