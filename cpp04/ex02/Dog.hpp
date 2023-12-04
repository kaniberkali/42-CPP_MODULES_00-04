#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain *brain;
    public:
		Dog(void);
		~Dog(void);

	 	Dog( const Dog& src );
    	Dog& operator=( const Dog& src );
		void	makeSound(void) const;
};

#endif