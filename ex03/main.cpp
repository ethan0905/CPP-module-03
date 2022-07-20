/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:19:36 by esafar            #+#    #+#             */
/*   Updated: 2022/07/20 13:41:37 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
    ClapTrap ethan("ethan");

    ethan.attack("bobby");
    ethan.takeDamage(2);
    ethan.beRepaired(5);

    ScavTrap alex("alex");

    alex.attack("jhon");
    alex.takeDamage(10);
    alex.guardGate();

    FragTrap manu("manu");
    
    manu.attack("patrick");
    manu.highFivesGuys();
    
    DiamondTrap dim("dim");

    dim.attack("manu");
    dim.whoAmI();

	return (0);
}
