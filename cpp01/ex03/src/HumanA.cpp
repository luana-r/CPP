/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:05:55 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/17 19:58:13 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &WeaponA)
	: name(name), weaponA(WeaponA) {};

HumanA::~HumanA() {};

void HumanA::attack(void) {
	std::cout << this->getName() << " attacks with their " << this->weaponA.getType() << std::endl;
}

std::string HumanA::getName(void) {
	return (this->name);
}