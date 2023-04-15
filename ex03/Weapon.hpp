/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 03:37:49 by makacem           #+#    #+#             */
/*   Updated: 2023/04/14 23:00:32 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    std::string const   &getType(void) const;
    void    setType(std::string type);
};

#endif