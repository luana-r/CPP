/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:43:30 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/17 19:59:12 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon &weaponA;
	public:
		HumanA(std::string name, Weapon &WeaponA);
		~HumanA();
		
		void attack(void);
		std::string getName(void);
};

#endif