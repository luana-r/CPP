/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 21:52:30 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/07 22:16:19 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>     // std::cout, std::endl
# include <iomanip>
# include <sstream>
# include <string>
# include <cstring>

class PhoneBook {
	private:
		Contact	contactList[8];
		int		contactCount;
		int		iterList;
	
	public:
		PhoneBook();
		~PhoneBook();

		void	addContact();
		void	searchContact();
		void	printContact(int id);

};

# endif