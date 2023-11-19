#include "Zombie.hpp"

int main( void ) {
    std::cout << "Creating zombie on the stack." << std::endl;
    Zombie zombi1;
    zombi1.setName("Stack Ali");
    zombi1.announce();
    std::cout << "Creating zombie on the heap." << std::endl;
    Zombie *zombi2 = newZombie("Heap Ali");
    zombi2->announce();
    delete zombi2;
    std::cout << "Calling randomChump()." << std::endl;
    randomChump("randomCump Ali");
    return EXIT_SUCCESS;
}