/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:08:53 by makacem           #+#    #+#             */
/*   Updated: 2023/04/10 01:37:56 by makacem          ###   ########.fr       */
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
        Zombie(/* args */);
        ~Zombie();
        void    announce(void)
        {
            std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
        }
        Zombie* newZombie(std::string name);
        void    randomChump(std::string name);
};

#endif