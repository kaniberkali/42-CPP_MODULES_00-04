#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain *brain;
    public:
		Cat(void);
		~Cat(void);

	 	Cat( const Cat& src );
    	Cat& operator=( const Cat& src );
		void	makeSound(void) const;
};

#endif