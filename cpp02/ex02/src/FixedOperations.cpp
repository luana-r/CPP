#include "Fixed.hpp"
//COMPARISON

bool	Fixed::operator==(const Fixed& other) const {
	return (_fixedNumberValue == other.getRawBits() ? true : false);
}

bool	Fixed::operator!=(const Fixed& other) const {
	return (_fixedNumberValue != other.getRawBits() ? true : false);
}

bool	Fixed::operator<=(const Fixed& other) const {
	return (_fixedNumberValue <= other.getRawBits() ? true : false);
}

bool	Fixed::operator>=(const Fixed& other) const {
	return (_fixedNumberValue >= other.getRawBits() ? true : false);
}

bool	Fixed::operator<(const Fixed& other) const {
	return (_fixedNumberValue < other.getRawBits() ? true : false);
}

bool	Fixed::operator>(const Fixed& other) const {
	return (_fixedNumberValue > other.getRawBits() ? true : false);
}

// OPERATORS
Fixed	Fixed::operator+(const Fixed& other) const {
	return (Fixed(toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& other) const {
	return (Fixed(toFloat() - other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& other) const {
	if (other.toFloat() == 0.000000000f) {
		std::cout << "Division by zero is a crime" << std::endl;
		return Fixed(0);
	}
	return (Fixed(toFloat() / other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& other) const {
	return (Fixed(toFloat() * other.toFloat()));
}

// OTHERS

Fixed&	Fixed::operator++() {
	++_fixedNumberValue;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	temp = *this;
	_fixedNumberValue++;
	return temp;
}

Fixed&	Fixed::operator--() {
	--_fixedNumberValue;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	temp = *this;
	_fixedNumberValue--;
	return temp;
}

// MIN
Fixed&	Fixed::min( Fixed& a, Fixed& b ) {
	return (a < b ? a : b);
}

const	Fixed& Fixed::min( const Fixed& a, const Fixed& b) {
	return (a < b ? a : b);
}

//MAX
Fixed&	Fixed::max( Fixed& a, Fixed& b ) {
	return (a > b ? a : b);
}

const	Fixed& Fixed::max( const Fixed& a, const Fixed& b) {
	return (a > b ? a : b);
}