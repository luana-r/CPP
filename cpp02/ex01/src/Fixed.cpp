/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:25:36 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/06/08 23:57:31 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed() : fixedInteger(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	 *this = other;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixedInteger = other.fixedInteger;
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedInteger;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedInteger = raw;
}

Fixed::Fixed(int const value) {
	// multiplica o número inteiro por 256, 2^8
	// que´é o mesmo que deslocar 8 bits para a esquerda
	// como é número inteiro serão adicionar 8 bits zeros
	this->fixedInteger = value << fractionalBits;
};

Fixed::Fixed(float const value) {
	this->fixedInteger = roundf(value * (1 << fractionalBits));
};

float Fixed::toFloat( void ) const {
	return ((float)this->fixedInteger / (float)(1 << fractionalBits));
};

int Fixed::toInt( void ) const {
	return (this->fixedInteger >> fractionalBits);
}

std::ostream & operator<<(std::ostream &os, Fixed const &num)
{
    os << num.toFloat();
    return (os);
}

