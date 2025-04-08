/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 21:52:30 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/03 21:19:01 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>     // std::cout, std::endl
# include <iomanip>
# include <sstream>
# include <string>

class PhoneBook {
	private:
		Contact	contactList[8];
		int		contactCount;
	
	public:
		PhoneBook();
		~PhoneBook();

		void	addContact();
		void	searchContact();
		void	printContact(int id);

};

# endif