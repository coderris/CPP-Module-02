/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:28:30 by lanton-m          #+#    #+#             */
/*   Updated: 2026/04/21 12:28:30 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	this->value = 0;
	return ;
}

Fixed::Fixed(const Fixed &fix)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fix;
	return ;
}

Fixed::Fixed(const int n)
{
	//std::cout << "Int constructor called" << std::endl;
	this->value = n << this->bits;
}

Fixed::Fixed(const float fl)
{
	//std::cout << "Float construtor called" << std::endl;
	this->value = roundf(fl * (1 << this->bits));
}

Fixed &Fixed::operator=(const Fixed &f)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->value = f.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return ( (float)this->value / (float)(1 << bits));
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->bits); 
}

std::ostream &operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return (out);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	return (this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return (this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return (this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	return (this->toFloat() / other.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->value++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->value--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &left, Fixed &right)
{
	if (left.getRawBits() > right.getRawBits())
		return (right);
	else
		return (left);
}

const Fixed	&Fixed::min(const Fixed &left, const Fixed &right)
{
	if (left.getRawBits() > right.getRawBits())
		return (right);
	else
		return (left);
}

Fixed	&Fixed::max(Fixed &left, Fixed &right)
{
	if (left.getRawBits() < right.getRawBits())
		return (right);
	else
		return (left);
}

const Fixed	&Fixed::max(const Fixed &left, const Fixed &right)
{
	if (left.getRawBits() < right.getRawBits())
		return (right);
	else
		return (left);
}