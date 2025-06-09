/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:58:41 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/06/08 23:45:38 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int					fixedInteger;
		static const int	fractionalBits = 8;
	public:
		Fixed(); //construtor
		Fixed(int const value);
		Fixed(float const value);
		Fixed(const Fixed& other); //construtor de cópia
		~Fixed(); //destrutor
		Fixed& operator=(const Fixed& other); // atribuidor de cópia

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
	};
	

std::ostream &operator<<(std::ostream &os, Fixed const &num);


# endif