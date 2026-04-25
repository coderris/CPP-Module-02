/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 22:34:57 by lanton-m          #+#    #+#             */
/*   Updated: 2026/04/25 22:34:57 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point	vect(Point const start, Point const finish)
{
	Point	tmp(finish.getX() - start.getX(), finish.getY() - start.getY());

	return tmp;
}

int	mult_vect(Point a, Point b)
{
	return (a.getX().toFloat() * b.getY().toFloat() - a.getY().toFloat() * b.getX().toFloat());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Point 	v_AB = vect(a,b);
	Point	v_AP = vect(a,point);
	Point	v_BC = vect(b,c);
	Point	v_BP = vect(b,point);
	Point	v_CA = vect(c,a);
	Point	v_CP = vect(c,point);

	if ((mult_vect(v_AB,v_AP) > 0 && mult_vect(v_BC,v_BP) > 0 && mult_vect(v_CA,v_CP) > 0) ||
		(mult_vect(v_AB,v_AP) < 0 && mult_vect(v_BC,v_BP) < 0 && mult_vect(v_CA,v_CP) < 0))
		return 	true;
	else
		return false;
}

