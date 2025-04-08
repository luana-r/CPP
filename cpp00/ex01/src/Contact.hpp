/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:36:24 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/02 22:14:24 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

# define HEADER "\033[38;5;189m"   // Purple
# define OPTION "\033[38;5;80m"    // Cyan
# define PROMPT "\033[38;5;215m"   // Orange
# define TEXT "\033[38;5;228m"      // Yellow
# define HIGHLIGHT "\033[38;5;206m" // Pink
# define RESET "\033[0m"
# define GREEN "\033[1;38;5;84m"
# define RED "\033[1;38;5;196m" 

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		Contact();
		~Contact();
		
		void		setFirstName(std::string _firstName);
		void		setLastName(std::string _lastName);
		void		setNickname(std::string _nickname);
		void		setPhoneNumber(std::string _phoneNumber);
		void		setDarkestSecret(std::string _darkestSecret);

		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
};

# endif