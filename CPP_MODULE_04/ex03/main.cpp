//
// Created by lhawick on 20.09.2021.
//

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	Character ch("Jack");
	AMateria * ice = new Ice();
	AMateria * cure = new Cure();

	ch.equip(ice);
	ch.equip(cure);
	ch.use(0, ch);
	ch.use(1, ch);

	Character ch1 = ch;
	Character ch2(ch1);

	ch.equip(cure);
	ch = ch2;

	MateriaSource ms;

	ms.learnMateria(ice);

	MateriaSource ms2 = ms;

	AMateria * newIce = ms2.createMateria("ice");

	ms.learnMateria(ice);

	AMateria * unknowMateria = ms.createMateria("pipka");

	unknowMateria = 0;
	ch2.equip(newIce);
	ch2.use(2, ch1);
	delete ice;
	delete cure;
	delete newIce;
	ch2.use(1, ch1);
	ch1.use(0, ch);
	ch1.unequip(0);
	ch.use(0, ch1);
	ch1.use(0, ch);

	return 0;
}