/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:19:36 by esafar            #+#    #+#             */
/*   Updated: 2022/07/19 20:55:41 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
    ClapTrap ethan("ethan");

    ethan.attack("bobby");
    ethan.takeDamage(2);
    ethan.beRepaired(5);
    ethan.beRepaired(10);
    ethan.takeDamage(10);
    ethan.beRepaired(5);
    ethan.beRepaired(5);
    ethan.beRepaired(5);
    ethan.beRepaired(5);
    ethan.beRepaired(5);
    ethan.beRepaired(5);
    ethan.beRepaired(5);

    ScavTrap alex("alex");

    alex.attack("jhon");
    alex.takeDamage(10);

	return (0);
}
