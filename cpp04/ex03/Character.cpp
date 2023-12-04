#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
	std::cout << "A character named \"" << name << "\" was created" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << "Character named " << this->name << " was destroyed" << std::endl;
}

std::string const & Character::getName() const
{
	return (this->name);
}

Character::Character(Character const & ref) : name(ref.getName() + "_copy")
{
	for(int i = 0; i < 4; i++)
	{
		if ((ref.inventory)[i])
			(this->inventory)[i] = (ref.inventory[i])->clone();
	}
	std::cout << "A character named " << name << " was created from copy of " << ref.name << "" << std::endl;
}

Character & Character::operator=(Character const & ref)
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

void Character::equip(AMateria* m)
{
	int i = 0;

	if (!m)
	{
		std::cout << this->name << " tried to equip nothing and it did nothing" << std::endl;
		return ;
	}
	while ((this->inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << this->name << " can't equip more than 4 Materia";
		return ;
	}
	(this->inventory)[i] = m;
	std::cout << this->name << " equipped materia " << m->getType() << " in slot " << i << "" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		std::cout << this->name << " tried to unequip nothing at slot " << idx << " and it did nothing" << std::endl;
	else if (!(this->inventory)[idx])
		std::cout << this->name << " has nothing equipped at slot " << idx << " so he can't unequip it" << std::endl;
	else
	{
		AMateria *ptr = (this->inventory)[idx];
		std::cout << this->name << " unequipped " << ptr->getType() << " at slot "<< idx << "" << std::endl;
		(this->inventory)[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	std::string	name = this->getName();

	if (idx < 0 || idx >= 4 || !(this->inventory)[idx])
	{
		std::cout << "Nothing found to use at index " << idx << std::endl;
		return ;
	}
	((this->inventory)[idx])->use(target);
}
