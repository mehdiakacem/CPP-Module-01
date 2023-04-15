/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 03:39:29 by makacem           #+#    #+#             */
/*   Updated: 2023/04/14 22:59:15 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
:type(type)
{
}

Weapon::~Weapon()
{
}

std::string const   &Weapon::getType(void) const
{
    return this->type;
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}
