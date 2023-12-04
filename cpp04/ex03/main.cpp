#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    std::cout << "--------------Other Tests-----------------" << std::endl;
    IMateriaSource *materia = new MateriaSource();
    materia->learnMateria(new Ice());
    materia->learnMateria(new Cure());
    ICharacter *akaniber = new Character("Ali Kanıberk");
    ICharacter *target = new Character("target");
    akaniber->equip(materia->createMateria("ice"));
    akaniber->equip(materia->createMateria("cure"));
    akaniber->use(0, *target);
    akaniber->use(1, *target);
    delete akaniber;
    delete target;
    delete materia;
    return 0;
}