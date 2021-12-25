//
// Created by lhawick on 29.08.2021.
//

#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixedValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	_fixedValue = other.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this == &other)
		return *this;

	_fixedValue = other.getRawBits();
	std::cout << "Assignation operator called " << std::endl;

	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called " << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called " << std::endl;

	return _fixedValue;
}

void Fixed::setRawBits(int const raw)
{
	_fixedValue = raw;
}