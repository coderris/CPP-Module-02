/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 22:01:25 by lanton-m          #+#    #+#             */
/*   Updated: 2026/04/25 22:52:04 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	x;
		Fixed const	y;
    public:
        Point(void);
		Point(const float a, const float b);
		Point(const Fixed x, const Fixed b);
        Point(const Point& other);
        Point &operator=(const Point &other);
        ~Point();
		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

#endif

