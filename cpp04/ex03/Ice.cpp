#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Ice::Ice() : type("ice")
{
	std::cout << this->type << " constructed" << std::endl;
}

Ice::~Ice()
{
	std::cout << this->type << " destroyed" << std::endl;
}

Ice::Ice(Ice const & ref) : type(ref.getType())
{
	std::cout << this->type << " constructed from copy" << std::endl;
}

Ice & Ice::operator=(Ice const & ref)
{
	std::cout << "Assigned from " << ref.getType() << std::endl;
	return (*this);
}

std::string const & Ice::getType( void ) const
{
	return (this->type);
}

Ice *Ice::clone() const
{
	Ice	*ret = new Ice;
	return (ret);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() + " *" << std::endl;
}