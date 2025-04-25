/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:41:09 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/17 19:24:37 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {};
Weapon::Weapon(std::string type) : type(type) {};
Weapon::~Weapon() {};

std::string Weapon::getType(void) {
	return (this->type);
}

void Weapon::setType(std::string type) {
	this->type = type;
}
