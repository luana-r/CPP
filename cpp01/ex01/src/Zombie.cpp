/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 21:00:33 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/06/08 19:19:29 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::Zombie(std::string name) {
	this->name = name;
};

Zombie::~Zombie() {
	std::cout << this->name << ": called destructor" << std::endl;
};

void	Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}

void	Zombie::setName(std::string name) {
	this->name = name;
}
