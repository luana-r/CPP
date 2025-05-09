/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:58:41 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/05/08 19:56:20 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int					fixedInteger;
		static const int	fractionalBits = 8;
	public:
		Fixed(); //construtor
		Fixed(const Fixed& other); //construtor de cópia
		~Fixed(); //destrutor
		Fixed& operator=(const Fixed& other); // atribuidor de cópia

		int getRawBits(void) const;
		void setRawBits(int const raw);
	};
	
# endif