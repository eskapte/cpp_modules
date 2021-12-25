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

		Fixed&	operator=(const Fixed &other);

		float 	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		~Fixed();
};


#endif //MODULE02_FIXED_HPP
