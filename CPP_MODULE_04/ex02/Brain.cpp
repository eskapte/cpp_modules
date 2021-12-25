//
// Created by lhawick on 14.09.2021.
//

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < IDEAS_SIZE; i++)
		ideas[i] = getRandomIdea();
	std::cout << "A Brain was created" << std::endl;
}

Brain::Brain(Brain &other)
{
	std::string * copiedIdeas = other.getIdeas();
	for (int i = 0; i < IDEAS_SIZE; i++)
		this->ideas[i] = copiedIdeas[i];
	std::cout << "A Brain was copied" << std::endl;
}

Brain::~Brain()
{
	std::cout << "A Brain was destroyed" << std::endl;
}

std::string	Brain::getRandomIdea()
{
	std::string newIdea;
	const char	chars[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVW"
							"XYZabcdefghijklmnopqrstuvwxyz";

	std::srand(std::time(0));
	for (int i = 0; i < 12; i++)
		newIdea += chars[std::rand() % (sizeof(chars) - 1)];

	return newIdea;
}

std::string * Brain::getIdeas()
{
	return this->ideas;
}

void Brain::printIdeas()
{
	for (int i = 0; i < IDEAS_SIZE; i++)
		std::cout << ideas[i] << std::endl;
}