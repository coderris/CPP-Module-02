/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:28:33 by lanton-m          #+#    #+#             */
/*   Updated: 2026/04/21 12:28:33 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					value;
		static const int 	bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& fix);
		Fixed(const int n);
		Fixed(const float fl);
		Fixed &operator=(const Fixed &f);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;
		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		static Fixed		&min(Fixed &left, Fixed &right);
		static const Fixed	&min(const Fixed &left, const Fixed &right);
		static Fixed		&max(Fixed &left, Fixed &right);
		static const Fixed	&max(const Fixed &left, const Fixed &right);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fix);

#endif