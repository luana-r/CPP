/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 21:05:19 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/22 22:20:06 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR", "SILENT"};

    for (int i = 0; i < 5; i++) {
        std::cout << "\nCalling complain with level: " << levels[i] << std::endl;
        harl.complain(levels[i]);
    }

    std::cout << "***TESTE SEPARADO***" << std::endl;

    harl.complain("DEBUG");
    harl.complain("luana");
    return 0;
}