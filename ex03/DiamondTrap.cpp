/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:58:07 by esafar            #+#    #+#             */
/*   Updated: 2022/07/20 14:46:01 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("default_clap_name"), ScavTrap(), FragTrap() {
    
    std::cout << WHITE "DiamondTrap:: " << GREEN "Default constructor called" END<< std::endl << std::endl;

    this->_name = "(null)";
    this->FragTrap::_hitPoints = 100;
    this->ScavTrap::_energyPoints = 100;
    this->FragTrap::_attackDamages = 30;

    return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap() {
    
    this->ClapTrap::_name = name + "_clap_name";
    std::cout << WHITE "DiamondTrap:: " <<  GREEN "Constructor " LIGHTDARK "[" << this->ClapTrap::_name << "]" GREEN " called" END << std::endl << std::endl;

    this->FragTrap::_hitPoints = 100;
    this->ScavTrap::_energyPoints = 100;
    this->FragTrap::_attackDamages = 30;

    std::cout << LIGHTDARK << this->ClapTrap::_name << " : " WHITE "Current hitpoints: " << this->_hitPoints << std::endl;
    std::cout << LIGHTDARK << this->ClapTrap::_name << " : " WHITE "Current energypoints: " << this->_energyPoints << END << std::endl << std::endl;

    return ;
}

DiamondTrap::~DiamondTrap() {

    std::cout << WHITE "DiamondTrap:: " <<  RED "Destructor called" END << std::endl << std::endl;

    return ;
}

void    DiamondTrap::attack( std::string const &target ) {

    std::cout << WHITE "DiamondTrap:: " END;
    this->ScavTrap::attack(target);
    return ;
}


void    DiamondTrap::whoAmI( void ) {

    std::cout << WHITE "DiamondTrap:: Who Am I ? That's a good question.." END << std::endl << std::endl;

    return ;
}