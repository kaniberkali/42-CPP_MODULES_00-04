#include <iostream>
#include "fileReplacer.hpp"

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string infile = argv[1];
        std::string outfile = infile + ".replaced";
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        FileReplacer fileReplacer(infile, outfile, s1, s2);
        if (!fileReplacer.isRead())
        {
            std::cerr << fileReplacer.getError() << std::endl;
            return EXIT_FAILURE;
        }
    }
    else
    {
        std::cerr << "You must enter 3 parameters: filename, s1 and s2." << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}