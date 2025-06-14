/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:32:28 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/06/13 23:33:05 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int main( void ) {
	{
		std::cout << " -- Test subject: -- \n" << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << " -- Test 1: Sum -- \n" << std::endl;
		Fixed a = 10;
		Fixed const b( Fixed( 5.05f ) + Fixed( 15 ) );
		std::cout << " * * * b received 5.05f + 15 * * * " << std::endl;
		std::cout << "value of a in fixed-point: " << a.getRawBits() << std::endl;
		std::cout << "value of b in fixed-point: " << b.getRawBits() << std::endl;
		std::cout << "value of a as integer: " << a.toInt() << std::endl;
		std::cout << "value of b as integer: " << b.toInt() << std::endl;
		std::cout << "value of a as float: " << a.toFloat() << std::endl;
		std::cout << "value of b as float: " << b.toFloat() << std::endl;
		std::cout << " * * * Min and Max * * * " << std::endl;
		std::cout << "Max: " << Fixed::max( a, b ) << std::endl;
		std::cout << "Min: " << Fixed::min( a, b ) << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << " -- Test 2: Mult -- \n" << std::endl;
		Fixed a = 10;
		Fixed const b( Fixed( 5.05f ) * Fixed( 3 ) );
		std::cout << " * * * b received 5.05f * 3 * * * " << std::endl;
		std::cout << "value of a in fixed-point: " << a.getRawBits() << std::endl;
		std::cout << "value of b in fixed-point: " << b.getRawBits() << std::endl;
		std::cout << "value of a as integer: " << a.toInt() << std::endl;
		std::cout << "value of b as integer: " << b.toInt() << std::endl;
		std::cout << "value of a as float: " << a.toFloat() << std::endl;
		std::cout << "value of b as float: " << b.toFloat() << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << " -- Test 3: Conditional Operators -- \n" << std::endl;
		Fixed	a(6);
		Fixed	b(Fixed(4) + Fixed(2));

		if (a != b)
			std::cout << "Different | a: " << a << " and b: " << b << std::endl;
		else if (a == b)
			std::cout << "Equals | a: " << a << " and b: " << b << std::endl;
		a = (Fixed(a) * Fixed(10));
		if (a > b)
			std::cout << "A is greater than B |" << " a: "  << a << " and b: " << b << std::endl;
		else if (a < b)
			std::cout << "B is greater than A |" << " a: "  << a << " and b: " << b << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << " -- Test 4: Values -- \n" << std::endl;
		Fixed a = 10;
		Fixed b = 5.56f;
		std::cout << "value of a in fixed-point: " << a.getRawBits() << std::endl;
		std::cout << "value of b in fixed-point: " << b.getRawBits() << std::endl;
		std::cout << "value of a as integer: " << a.toInt() << std::endl;
		std::cout << "value of b as integer: " << b.toInt() << std::endl;
		std::cout << "value of a as float: " << a.toFloat() << std::endl;
		std::cout << "value of b as float: " << b.toFloat() << std::endl;
		std::cout << std::endl;
	}
	return 0;
}