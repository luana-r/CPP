/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 21:05:19 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/16 21:57:59 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie *firstHorde = zombieHorde(5, "zumbi");

	for (int i = 0; i < 5; i++)
		firstHorde[i].announce();
	delete[] firstHorde;
	return 0;
}