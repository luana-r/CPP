/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:05:55 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/06/08 19:52:55 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &WeaponA)
	: name(name), weaponA(WeaponA) {};

HumanA::~HumanA() {
	std::cout << this->getName() << " : called destructor" << std::endl;
};

void HumanA::attack(void) {
	std::cout << this->getName() << " attacks with their " << this->weaponA.getType() << std::endl;
}

const std::string& HumanA::getName(void) const{
	return (this->name);
}