/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:58:42 by makacem           #+#    #+#             */
/*   Updated: 2023/04/13 01:37:13 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *hord;
    
    hord = zombieHorde(5, "Mehdi");

    for (int i = 0; i < 5; i++)
    {
        hord[i].announce();
    }
    delete [] hord;
    return (0);
}
