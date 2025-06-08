/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 21:05:19 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/06/08 19:15:47 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	first_zombie("Luana");
	
	first_zombie.announce();
	// zumbi alocado dinamicamente na heap e liberado com delete
	Zombie *secondZombie = newZombie("LUANA");
	secondZombie->announce();
	// zumbi alocado na stack e liberado dentro do escopo da função
	randomChump("luana***");
	delete secondZombie;
	return 0;
}