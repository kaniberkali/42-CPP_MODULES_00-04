#include "Harl.hpp"



int main( int ac, char **av ) {

    if (ac != 2)
    {
        std::cerr << "It is mandatory to enter 1 parameter" << std::endl;
        return EXIT_FAILURE;
    }

    std::string input = av[1];
    Harl        harl;

    harl.complain(input);
    return EXIT_SUCCESS;
}