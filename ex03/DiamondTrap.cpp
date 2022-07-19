/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:58:07 by esafar            #+#    #+#             */
/*   Updated: 2022/07/19 22:20:29 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("default_clap_name"), ScavTrap(), FragTrap() {
    
    std::cout << GREEN "DiamondTrap default constructor called" END<< std::endl << std::endl;

    this->_name = "(null)";
    this->FragTrap::_hitPoints = 100;
    this->ScavTrap::_energyPoints = 100;
    this->FragTrap::_attackDamages = 30;

    return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ), FragTrap( name ) {
    
    std::cout << GREEN "DiamondTrap constructor [" << this->_name << "] called" END << std::endl << std::endl;

    this->FragTrap::_hitPoints = 100;
    this->ScavTrap::_energyPoints = 100;
    this->FragTrap::_attackDamages = 30;

    return ;
}

DiamondTrap::~DiamondTrap() {

    std::cout << RED "DiamondTrap destructor called" END << std::endl << std::endl;

    return ;
}

void    DiamondTrap::attack( std::string const &target ) {

    this->ScavTrap::attack(target);
    return ;
}


void    DiamondTrap::whoAmI( void ) {

    return ;
}