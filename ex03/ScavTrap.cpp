/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:13:21 by esafar            #+#    #+#             */
/*   Updated: 2022/07/20 14:41:07 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
    
    std::cout << YELLOW "ScavTrap:: " <<  GREEN "Default constructor called" END<< std::endl << std::endl;

    this->_name = "(null)";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamages = 20;

    return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
    
    std::cout << YELLOW "ScavTrap:: " << GREEN "Constructor " LIGHTDARK "[" << this->_name << "]" GREEN " called" END << std::endl << std::endl;

    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamages = 20;

    return ;
}

ScavTrap::~ScavTrap() {

    std::cout << YELLOW "ScavTrap:: " << RED "Destructor called" END << std::endl << std::endl;

    return ;
}

void    ScavTrap::attack( const std::string& target ) {

    std::cout << YELLOW "ScavTrap " LIGHTDARK << this->ClapTrap::_name << YELLOW " attacks " LIGHTDARK << target << YELLOW ", causing " LIGHTDARK << this->ClapTrap::_attackDamages << YELLOW " points of damage!" END<< std::endl << std::endl;

    return ;
}

void    ScavTrap::guardGate( void ) {

    std::cout << YELLOW "ScavTrap entered Gate Keeper mode. 🛡" END << std::endl << std::endl;
    
    return ;
}
