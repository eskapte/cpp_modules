//
// Created by lhawick on 29.08.2021.
//

#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixedValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int num)
{
	_fixedValue = num << ftBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float num)
{
	_fixedValue = roundf(num * (1 << ftBits));
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat() const
{
	return (_fixedValue / (float)(1 << ftBits));
}

int Fixed::toInt() const
{
	return _fixedValue >> ftBits;
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

void Fixed::setRawBits(const int raw)
{
	_fixedValue = raw;
}

bool Fixed::operator == (const Fixed &other)
{
	return (this->_fixedValue == other.getRawBits());
}

bool Fixed::operator != (const Fixed &other)
{
	return (this->_fixedValue != other.getRawBits());
}

bool Fixed::operator < (const Fixed &other)
{
	return (this->_fixedValue < other.getRawBits());
}

bool Fixed::operator > (const Fixed &other)
{
	return (this->_fixedValue > other.getRawBits());
}

bool Fixed::operator <= (const Fixed &other)
{
	return (this->_fixedValue <= other.getRawBits());
}

bool Fixed::operator >= (const Fixed &other)
{
	return (this->_fixedValue >= other.getRawBits());
}

Fixed Fixed::operator + (const Fixed &other)
{
	Fixed newFixed;

	newFixed.setRawBits(this->_fixedValue + other.getRawBits());
	return newFixed;
}

Fixed Fixed::operator - (const Fixed &other)
{
	Fixed newFixed;

	newFixed.setRawBits(this->_fixedValue - other.getRawBits());
	return newFixed;
}

Fixed Fixed::operator * (const Fixed &other)
{
	Fixed		newFixed;

	newFixed.setRawBits( (long long)(this->_fixedValue * other.getRawBits())
							>> ftBits);
	return newFixed;
}

Fixed Fixed::operator / (const Fixed &other)
{
	Fixed		newFixed;

	newFixed.setRawBits( ((long long)this->_fixedValue << ftBits) / other
							.getRawBits());
	return newFixed;
}

Fixed& Fixed::operator -- ()
{
	--this->_fixedValue;

	return *this;
}

Fixed& Fixed::operator ++ ()
{
	++this->_fixedValue;

	return *this;
}

Fixed Fixed::operator -- (int)
{
	Fixed temp(*this);

	--this->_fixedValue;
	return temp;
}

Fixed Fixed::operator ++ (int)
{
	Fixed temp(*this);

	++this->_fixedValue;
	return temp;
}

Fixed& Fixed::min (Fixed &fix1, Fixed &fix2)
{
	if (fix1.getRawBits() <= fix2.getRawBits())
		return fix1;
	return fix2;
}

const Fixed& Fixed::min (const Fixed &fix1, const Fixed &fix2)
{
	if (fix1.getRawBits() <= fix2.getRawBits())
		return fix1;
	return fix2;
}

Fixed& Fixed::max (Fixed &fix1, Fixed &fix2)
{
	if (fix1.getRawBits() >= fix2.getRawBits())
		return fix1;
	return fix2;
}

const Fixed& Fixed::max (const Fixed &fix1, const Fixed &fix2)
{
	if (fix1.getRawBits() >= fix2.getRawBits())
		return fix1;
	return fix2;
}