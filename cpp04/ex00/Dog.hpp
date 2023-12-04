#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
		Dog(void);
		~Dog(void);

		void	makeSound(void) const;
};

#endif