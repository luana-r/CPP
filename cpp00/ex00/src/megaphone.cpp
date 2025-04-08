/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 19:01:27 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/03/19 19:53:40 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; i < argc; i++) {
			std::string str = argv[i];
			for (int j = 0; static_cast<size_t>(j) < str.size(); j++)
				str[j] = std::toupper(str[j]);
		std::cout << str ;
	  }
	}
	std::cout << std::endl ;
	return (0);
}