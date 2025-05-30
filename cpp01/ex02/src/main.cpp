/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 21:05:19 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/17 18:31:51 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"

int	main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Endereço string: " << &str << std::endl;
	std::cout << "Endereço PTR: " << &stringPTR << std::endl;
	std::cout << "Endereço REF: " << &stringREF << std::endl;
	
	std::cout << "string: " << str << std::endl;
	std::cout << "string PTR: " << *stringPTR << std::endl;
	std::cout << "string REF: " << stringREF << std::endl;
}