/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 08:30:48 by makacem           #+#    #+#             */
/*   Updated: 2023/04/14 22:26:53 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
    Weapon *weapon;
    std::string name;
public:
    HumanB(std::string name);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon &weapon);
};



#endif