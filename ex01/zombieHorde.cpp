/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:59:41 by makacem           #+#    #+#             */
/*   Updated: 2023/04/16 17:40:36 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 0)
        N = 0;
    Zombie  *zombie = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        zombie[i].setName(name);
    }
    return zombie;
}
