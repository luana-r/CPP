/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:31:12 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/06/08 20:00:00 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
	this->WeaponB = NULL;
};

HumanB::~HumanB() {
	std::cout << this->getName() << " : called destructor" << std::endl;
};

void HumanB::attack(void) {
	if (!this->WeaponB)
		std::cout << this->name << " is unnarmed"<< std::endl;
	else
		std::cout << this->getName() << " attacks with their " << this->WeaponB->getType() << std::endl;
}

const std::string HumanB::getName(void) const {
	return (this->name);
}

void HumanB::setWeapon(Weapon &WeaponB) {
	this->WeaponB = &WeaponB;
}