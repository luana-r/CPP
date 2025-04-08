/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 21:52:19 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/03 21:27:40 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstring>

void	PhoneBook::addContact() {
	std::string firstName, lastName, nickName, phoneNumber, darkestSecret;
	int	id;

	std::cout << "Input the first name: " ;
	getline(std::cin, firstName);
	std::cout << "Input the last name: " ;
	getline(std::cin, lastName);
	std::cout << "Input the nickname: " ;
	getline(std::cin, nickName);
	std::cout << "Input the phone number: " ;
	getline(std::cin, phoneNumber);
	std::cout << "Input the darkest secret: " ;
	getline(std::cin, darkestSecret);
	
	if (this->contactCount == 8)
		id = this->contactCount - 1;
	else {
		id = this->contactCount;
		this->contactCount++;
	}
	this->contactList[id].setFirstName(firstName);
	this->contactList[id].setLastName(lastName);
	this->contactList[id].setNickname(nickName);
	this->contactList[id].setPhoneNumber(phoneNumber);
	this->contactList[id].setDarkestSecret(darkestSecret);
}

void	PhoneBook::printContact(int id) {
	std::cout << this->contactList[id].getFirstName() << std::endl ;
	std::cout << this->contactList[id].getLastName() << std::endl ;
	std::cout << this->contactList[id].getNickname() << std::endl ;
	std::cout << this->contactList[id].getPhoneNumber() << std::endl ;
	std::cout << this->contactList[id].getDarkestSecret() << std::endl ;
}

// construtor
PhoneBook::PhoneBook() {
    // Implementação do construtor
	contactCount = 0;
}

// destrutor
PhoneBook::~PhoneBook() {
    // Implementação do destrutor
}

void	PhoneBook::searchContact() {
	
	std::string name, last, nick, index;
	int id = 0;
	
	std::cout << std::endl;
	if (contactCount == 0) {
		std::cerr << RED << "No contacts available!" << RESET << std::endl;
		return;
	}
	
	else {
		std::cout << std::setfill (' ') << std::setw (10) << "id" << "|";
		std::cout << std::setfill (' ') << std::setw (10) << "First Name" << "|";
		std::cout << std::setfill (' ') << std::setw (10) << "Last Name" << "|";
		std::cout << std::setfill (' ') << std::setw (10) << "Nickname" << std::endl;
		
		for (id = 0; id < contactCount; id++) {
			
			name = contactList[id].getFirstName();
			if (name.length() > 10)
				name = name.substr(0, 9) + ".";

			last = contactList[id].getLastName();
			if (last.length() > 10)
				last = last.substr(0, 9) + ".";

			nick = contactList[id].getNickname();
			if (nick.length() > 10)
				nick = nick.substr(0, 9) + ".";
			
			std::cout << std::setfill (' ') << std::setw (10) << id + 1 << "|";
			std::cout << std::setfill (' ') << std::setw (10) << name << "|";
			std::cout << std::setfill (' ') << std::setw (10) << last << "|";
			std::cout << std::setfill (' ') << std::setw (10) << nick << std::endl ;
		}
	}
	std::cout << std::endl;
	std::cout << PROMPT << "Enter index contact: " << RESET;
	getline(std::cin, index);
	std::stringstream ss(index);
    ss >> id;
	if (id <= 0 || id > contactCount) {
		std::cerr << RED << "There's no contact with this index." << RESET << std::endl;
		return;
	}
	else {
		std::cout << "First Name: " << this->contactList[id - 1].getFirstName() << std::endl ;
		std::cout << "Last Name: " << this->contactList[id - 1].getLastName() << std::endl ;
		std::cout << "Nickname: " << this->contactList[id - 1].getNickname() << std::endl ;
		std::cout << "Phone number: " << this->contactList[id - 1].getPhoneNumber() << std::endl ;
		std::cout << "Darkest Secret: " << this->contactList[id - 1].getDarkestSecret() ;
	}
}
