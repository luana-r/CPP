/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:29:08 by lsouza-r          #+#    #+#             */
/*   Updated: 2025/04/25 20:51:45 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string replace(std::string line, std::string s1, std::string s2) {
    std::string result = line;
    size_t pos = 0;
    while ((pos = result.find(s1, pos)) != std::string::npos) {
        result.erase(pos, s1.length());
        result.insert(pos, s2);
        pos += s2.length();
    }
    return result;
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Try ./replace <filename> <string1> <string2>" << std::endl;
        return (1);
    }
    else {
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        if (s1.empty()) {
            std::cout << "Error: s1 is empty string" << std::endl;
            return (1);
        }
        std::string filename = argv[1];

        std::ifstream file(filename.c_str());
        if( !file.is_open() ){
          std::cout << "Error: failed to open file" << std::endl;
          return (1);
        }

        std::string outFileName = filename + "-replace";

        std::ofstream outfile(outFileName.c_str());
        if ( !outfile.is_open() ) {
            std::cout << "Error: failed to open output file" << std::endl;
            file.close();
            return (1);
        }

        std::string line;
        while (std::getline(file, line)) 
            outfile << replace(line, s1, s2) << std::endl;
        file.close();
        outfile.close();
    }
    return (0);
}
