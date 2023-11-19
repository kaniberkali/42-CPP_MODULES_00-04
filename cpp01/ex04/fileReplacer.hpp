#ifndef FILEREPLACER_HPP
# define FILEREPLACER_HPP

#include <iostream>
#include <fstream>

class FileReplacer
{
    private:
        std::string content;
        std::string error;
        bool        read;
    public:
        FileReplacer(std::string infile, std::string outfile, std::string search, std::string replace);
        std::string getContent(void);
        std::string getError(void);
        bool        isRead(void);
        ~FileReplacer();
};

#endif