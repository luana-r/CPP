/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:27:56 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/06/08 19:49:43 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon *WeaponB;

	public:
		HumanB(std::string name);
		~HumanB();

		void attack(void);
		const std::string getName(void) const;
		void setWeapon(Weapon &WeaponB);
};

# endif