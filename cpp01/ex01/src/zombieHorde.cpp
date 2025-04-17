/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 21:45:43 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/16 21:56:42 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	if (N <= 0)
		return NULL;
		
	Zombie *zombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++) 
		zombieHorde[i].setName(name);
		
	return (zombieHorde);
}