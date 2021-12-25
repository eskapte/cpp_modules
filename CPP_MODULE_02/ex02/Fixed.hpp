//
// Created by lhawick on 29.08.2021.
//

#pragma once

#ifndef MODULE02_FIXED_HPP
#define MODULE02_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
					 int	_fixedValue;
		static const int	ftBits = 8;
	public:
		Fixed();
		Fixed(int num);
		Fixed (float num);
		Fixed(const Fixed &other);

		Fixed&	operator =  (const Fixed &other);
		bool 	operator == (const Fixed &other);
		bool	operator != (const Fixed &other);
		bool 	operator >  (const Fixed &other);
		bool	operator <  (const Fixed &other);
		bool	operator >= (const Fixed &other);
		bool	operator <= (const Fixed &other);
		Fixed   operator +  (const Fixed &other);
		Fixed	operator -  (const Fixed &other);
		Fixed   operator *  (const Fixed &other);
		Fixed	operator /  (const Fixed &other);
		Fixed&  operator -- ();
		Fixed&  operator ++ ();
		Fixed   operator -- (int);
		Fixed   operator ++ (int);

		static Fixed& min (Fixed &fix1, Fixed &fix2);
		static const Fixed& min (const Fixed &fix1, const Fixed &fix2);
		static Fixed& max (Fixed &fix1, Fixed &fix2);
		static const Fixed& max (const Fixed &fix1, const Fixed &fix2);

		float 	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		~Fixed();
};


#endif //MODULE02_FIXED_HPP
