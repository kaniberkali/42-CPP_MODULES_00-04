#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
    protected:
        std::string type;
    public:
	AAnimal(void);
    AAnimal(std::string type);
    AAnimal(const AAnimal& src);

    virtual ~AAnimal(void);

    AAnimal& operator=(const AAnimal& rhs);
    
	virtual void	makeSound(void) const = 0;
    std::string		getType(void) const;
};

#endif