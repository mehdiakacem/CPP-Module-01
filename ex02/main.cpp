/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 01:39:41 by makacem           #+#    #+#             */
/*   Updated: 2023/04/13 02:00:07 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "• The memory address of the string variable: " << &string << std::endl;
    std::cout << "• The memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "• The memory address held by stringREF: " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "• The value of the string variable: " << string << std::endl;
    std::cout << "• The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "• The value pointed to by stringREF: " << stringREF << std::endl;
}
