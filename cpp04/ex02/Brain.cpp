#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain created." << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain(const Brain& brain)
{
    *this = brain;
}

Brain& Brain::operator=(const Brain& brain)
{
    std::cout << "Brain copy called." << std::endl;
    if ( this != &brain ) {
        for ( int i = 0; i < 100; i++ ) {
            this->ideas[i] = brain.ideas[i];
        }
    }
    return *this;
}