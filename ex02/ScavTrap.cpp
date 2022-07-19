/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:13:21 by esafar            #+#    #+#             */
/*   Updated: 2022/07/19 21:34:54 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
    
    std::cout << GREEN "ScavTrap default constructor called" END<< std::endl << std::endl;

    this->_name = "(null)";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamages = 20;

    return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
    
    std::cout << GREEN "ScavTrap constructor [" << this->_name << "] called" END << std::endl << std::endl;

    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamages = 20;

    return ;
}

ScavTrap::~ScavTrap() {

    std::cout << RED "ScavTrap destructor called" END << std::endl << std::endl;

    return ;
}

void    ScavTrap::attack( const std::string& target ) {

    std::cout << YELLOW "ScavTrap " << this->ClapTrap::_name << " attacks " << target << ", causing " << this->ClapTrap::_attackDamages << " points of damage!" END<< std::endl << std::endl;

    return ;
}

void    ScavTrap::guardGate( void ) {

    std::cout << YELLOW "ScavTrap entered Gate Keeper mode. 🛡" END << std::endl << std::endl;
    
    return ;
}
