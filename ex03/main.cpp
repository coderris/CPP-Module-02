/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:28:35 by lanton-m          #+#    #+#             */
/*   Updated: 2026/04/21 12:28:35 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main( void ) 
{
	// Definimos los vértices de un triángulo rectángulo
	Point const a(0.0f, 0.0f);
	Point const b(10.0f, 0.0f);
	Point const c(0.0f, 10.0f);

	// Definimos puntos de prueba
	Point const p1(2.0f, 2.0f);    // Estrictamente dentro
	Point const p2(12.0f, 12.0f);  // Fuera del triángulo
	Point const p3(5.0f, 0.0f);    // Pisando una arista (borde)
	Point const p4(0.0f, 0.0f);    // Exactamente en un vértice

	std::cout << "--- PRUEBAS DE BSP (Binary Space Partitioning) ---" << std::endl;

	std::cout << "Punto 1 (Dentro): " << (bsp(a, b, c, p1) ? "True (Correcto)" : "False (Error)") << std::endl;
	std::cout << "Punto 2 (Fuera): " << (!bsp(a, b, c, p2) ? "False (Correcto)" : "True (Error)") << std::endl;
	std::cout << "Punto 3 (Borde): " << (!bsp(a, b, c, p3) ? "False (Correcto)" : "True (Error)") << std::endl;
	std::cout << "Punto 4 (Vertice): " << (!bsp(a, b, c, p4) ? "False (Correcto)" : "True (Error)") << std::endl;

	return 0;
}
