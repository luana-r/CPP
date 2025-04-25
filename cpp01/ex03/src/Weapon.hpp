/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:38:20 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/17 20:03:05 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
	private:
		std::string type;
		
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		
		std::string getType(void);
		void setType(std::string type);
		
};

# endif