#include <iostream>

int main(int argc,  char **argv)
{
    if (argc > 1)
    {
        for (int i=1; i < argc; i++)
            for (int q=0; argv[i][q] != '\0'; q++)
                std::cout << (char)std::toupper(argv[i][q]);
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (EXIT_SUCCESS);
}
