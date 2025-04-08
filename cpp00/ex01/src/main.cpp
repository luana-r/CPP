/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 21:02:53 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/07 22:00:18 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstring>

void	showMenu(void) {
	std::cout << std::endl;
    std::cout << HEADER << " ─────────────────────────── " << std::endl;
    std::cout << HIGHLIGHT << "       PhoneBook Menu" << HEADER  << std::endl;
    std::cout << " ─────────────────────────── " << RESET << std::endl;
    std::cout << OPTION << "  ADD " << TEXT << "- Add a new contact" << RESET << std::endl;
    std::cout << OPTION << "  SEARCH " << TEXT << "- Display contacts" << RESET << std::endl;
    std::cout << OPTION << "  EXIT " << TEXT << "- Quit the program" << RESET << std::endl;
    std::cout << std::endl;
    std::cout << PROMPT << "Enter your choice: " << RESET;
}

int	main()
{
	PhoneBook myPhonebook;
	std::string input;

	showMenu();
	
	while (1) {
		getline(std::cin, input);
		if (input == "ADD")
			myPhonebook.addContact();
		else if (input == "SEARCH")
			myPhonebook.searchContact();
		else if (input == "EXIT")
			break;
		else
			std::cout << RED << "Invalid command. Please try again.";

		std::cout <<  std::endl;
		std::cout << PROMPT << "Enter new command: " << RESET;
	}
	return 0;
}