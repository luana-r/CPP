/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:58:41 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/06/13 23:28:26 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {

public:

	Fixed( void );
	Fixed( const int intFixedNumber );
	Fixed( const float floatFixedNumber );
	Fixed( const Fixed& other );
	~Fixed( void );

	Fixed& operator=( const Fixed& other );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	//Aritmetic operators
	Fixed	operator+(const Fixed& other) const;
	Fixed	operator-(const Fixed& other) const;
	Fixed	operator/(const Fixed& other) const;
	Fixed	operator*(const Fixed& other) const;

	//Comparison operators
	bool	operator==(const Fixed& other) const;
	bool	operator!=(const Fixed& other) const;
	bool	operator<=(const Fixed& other) const;
	bool	operator>=(const Fixed& other) const;
	bool	operator<(const Fixed& other) const;
	bool	operator>(const Fixed& other) const;

	//Others operators
	Fixed&	operator++(); // ++a
	Fixed	operator++(int); // a++
	Fixed&	operator--(); // --a
	Fixed	operator--(int); // a--

	//Min
	static Fixed& min( Fixed& a, Fixed& b );
	static const Fixed& min( const Fixed& a,  const Fixed& b);

	//Max
	static Fixed& max( Fixed& a, Fixed& b );
	static const Fixed& max( const Fixed& a,  const Fixed& b);

private:

	int	_fixedNumberValue;
	static const int	_fractionalBits = 8;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif