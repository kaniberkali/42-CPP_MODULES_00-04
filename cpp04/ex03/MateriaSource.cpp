#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Materia source was created" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
	}
}

MateriaSource::MateriaSource(MateriaSource const & ref)
{
	for (int i = 0; i < 4; i++)
	{
		if (ref.inventory[i])
			this->inventory[i] = (ref.inventory[i])->clone();
	}
	std::cout << "Materia source was created from copy" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & ref)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (ref.inventory[i])
			this->inventory[i] = (ref.inventory[i])->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << "Materia source was destoryed" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while ((this->inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "Can't learn more than 4 Materia";
		return ;
	}
	(this->inventory)[i] = m;
	std::cout << "Materia " << m->getType() << " learned" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while ((this->inventory)[i] && ((this->inventory)[i])->getType() != type && i < 4)
		i++;
	if (i >= 4 || !(this->inventory)[i])
	{
		std::cout << type << " materia does not exit" << std::endl;
		return (NULL);
	}
	std::cout << "Materia " << type << " created" << std::endl;
	return (((this->inventory)[i])->clone());
}