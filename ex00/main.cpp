/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:07:53 by makacem           #+#    #+#             */
/*   Updated: 2023/04/12 20:11:42 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *Mehdi;

    Mehdi = newZombie("Mehdi");
    Mehdi->announce();
    randomChump("Karim");
    delete Mehdi;
    return(0);
}
