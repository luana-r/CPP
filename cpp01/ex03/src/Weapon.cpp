/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:41:09 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/06/08 19:53:38 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {};
Weapon::Weapon(std::string type) : type(type) {};
Weapon::~Weapon() {};

const std::string& Weapon::getType(void) const{
	return (this->type);
}

void Weapon::setType(std::string type) {
	this->type = type;
}
