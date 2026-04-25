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

class Fixed
{
	private:
		int					value;
		static const int 	bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& fix);
		Fixed &operator=(const Fixed &f);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
#endif 