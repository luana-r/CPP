/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 21:05:19 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/16 21:37:57 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	first_zombie("Luana");
	
	first_zombie.announce();
	Zombie *secondZombie = newZombie("LUANA");
	secondZombie->announce();
	randomChump("luana***");
	delete secondZombie;
	return 0;
}