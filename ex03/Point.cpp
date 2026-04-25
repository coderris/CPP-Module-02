/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 22:01:32 by lanton-m          #+#    #+#             */
/*   Updated: 2026/04/26 00:26:01 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Default constructor
Point::Point(void)
{
    //std::cout << "Default constructor called" << std::endl;
    return ;
}

//Asignement constructor

Point::Point(const float x, const float y) : x(x), y(y)
{

}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y)
{
	
}

// Copy constructor
Point::Point(const Point &other) : x(other.getX()), y(other.getY())
{
    //std::cout << "Copy constructor called" << std::endl;
}

// Assignment operator overload
Point &Point::operator=(const Point &other)
{
    //std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

// Destructor
Point::~Point(void)
{
    //std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}

