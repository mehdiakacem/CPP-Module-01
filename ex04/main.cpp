/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 08:48:27 by makacem           #+#    #+#             */
/*   Updated: 2023/04/16 21:09:11 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error in parameters.\n";
        return 0;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    if (s1.length() == 0)
        return 0;
    std::string s2 = argv[3];
    
    
    std::ifstream   iFile;
    std::ofstream   oFile;

    iFile.open(filename);
    if (!iFile.is_open())
    {
        std::cout << "Error opening input file!\n";
        return 0;
    }
    oFile.open(filename + ".replace");
    if (!iFile.is_open())
    {
        std::cout << "Error opening output file!\n";
        return 0;
    }
    std::string line;
    int i;
    if (s2.find(s1) != std::string::npos)
        i = s1.length();
    else
        i = 1;
    while (getline(iFile, line))
    {
        std::size_t found = line.find(s1);
        if (found != std::string::npos)
        {
            line.erase(found, s1.length());
            line.insert(found, s2);
        }
        while (found != std::string::npos)
        {
            found = line.find(s1, found + i);
            if (found != std::string::npos)
            {
                line.erase(found, s1.length());
                line.insert(found, s2);
            }
        }
        oFile << line << std::endl;
    }
    
    iFile.close();
    oFile.close();
    
    return 0;
}