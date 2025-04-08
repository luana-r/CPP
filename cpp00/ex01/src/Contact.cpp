/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:01:53 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/03/26 21:53:11 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// getters
std::string Contact::getFirstName() {
	return this->firstName;
}

std::string Contact::getLastName() {
	return this->lastName;
}

std::string Contact::getNickname() {
	return this->nickname;
}

std::string Contact::getPhoneNumber() {
	return this->phoneNumber;
}

std::string Contact::getDarkestSecret() {
	return this->darkestSecret;
}

// setters
void	Contact::setFirstName(std::string str) {
	this->firstName = str;
}

void	Contact::setLastName(std::string str) {
	this->lastName = str;
}

void	Contact::setNickname(std::string str) {
	this->nickname = str;
}

void	Contact::setPhoneNumber(std::string str) {
	this->phoneNumber = str;
}

void	Contact::setDarkestSecret(std::string str) {
	this->darkestSecret = str;
}

// construtor
Contact::Contact() {
    // Implementação do construtor
}

// destrutor
Contact::~Contact() {
    // Implementação do destrutor
}



