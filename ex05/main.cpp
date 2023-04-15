/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 11:43:12 by makacem           #+#    #+#             */
/*   Updated: 2023/04/15 22:28:17 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    
    Harl    instance;

    instance.complain("DEBUG");
    instance.complain("INFO");
    instance.complain("WARNING");
    instance.complain("ERROR");
    return 0;
}