//
// Created by lhawick on 20.09.2021.
//

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const name) : name(name)
{
	for(int i = 0; i < MAX_INV_SIZE; i++)
		this->inventory[i] = 0;
}

Character::Character(const Character& other) : name(other.name)
{
	for(int i = 0; i < MAX_INV_SIZE; i++)
	{
		if (other.inventory[i] == 0)
			this->inventory[i] = 0;
		else
			this->inventory[i] = other.inventory[i]->clone();
	}
}

Character::~Character() {};

Character & Character::operator = (const Character & other)
{
	if (this == &other)
		return *this;

	if (this->name != "")
	{
		for (int i = 0; i < MAX_INV_SIZE; i++)
			if (inventory[i])
				delete inventory[i];
	}
	name = other.name;
	for(int i = 0; i < MAX_INV_SIZE; i++)
	{
		if (other.inventory[i] == 0)
			this->inventory[i] = 0;
		else
			this->inventory[i] = other.inventory[i]->clone();
	}

	return *this;
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria * m)
{
	for (int i = 0; i < MAX_INV_SIZE; i++)
	{
		if (this->inventory[i] == 0 && m)
		{
			this->inventory[i] = m->clone();
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < MAX_INV_SIZE && inventory[idx])
	{
		delete inventory[idx];
		this->inventory[idx] = 0;
	}
}

void Character::use(int idx, ICharacter & target)
{
	if (idx >= 0 && idx < MAX_INV_SIZE && inventory[idx])
		this->inventory[idx]->use(target);
	else
		std::cout << "Invalid idx or empty slot in the inventory" << std::endl;
}