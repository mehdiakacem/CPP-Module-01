/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:59:12 by makacem           #+#    #+#             */
/*   Updated: 2023/04/13 02:03:29 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void    setName(std::string name);
        void    announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif