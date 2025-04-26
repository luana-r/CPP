/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:31:12 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/17 20:04:18 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {};
HumanB::~HumanB() {};

void HumanB::attack(void) {
	std::cout << this->getName() << " attacks with their " << this->WeaponB->getType() << std::endl;
}

std::string HumanB::getName(void) {
	return (this->name);
}

void HumanB::setWeapon(Weapon &WeaponB) {
	this->WeaponB = &WeaponB;
}