/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:25:36 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/06/13 23:29:02 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed ( void ) : _fixedNumberValue(0) { }

Fixed::Fixed( const int intFixedNumber ) {
	this->_fixedNumberValue = intFixedNumber << _fractionalBits;
}

Fixed::Fixed( const float floatFixedNumber ) {
	this->_fixedNumberValue = roundf(floatFixedNumber * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other) {
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other) {
		this->_fixedNumberValue = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed( void ) { }

int	Fixed::getRawBits( void ) const { return _fixedNumberValue; }

void	Fixed::setRawBits( int const raw ) { _fixedNumberValue = raw; }

float	Fixed::toFloat( void ) const {
	return static_cast<float>(_fixedNumberValue) / (1 << _fractionalBits);
}

int	Fixed::toInt( void ) const {
	return _fixedNumberValue >> _fractionalBits; 
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}