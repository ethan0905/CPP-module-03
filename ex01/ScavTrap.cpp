/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:13:21 by esafar            #+#    #+#             */
/*   Updated: 2022/07/19 20:55:25 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
    
    std::cout << "ScavTrap default constructor called" << std::endl;

    this->_name = "(null)";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamages = 20;

    return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
    
    std::cout << "ScavTrap constructor [" << this->_name << "] called" << std::endl;

    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamages = 20;

    return ;
}

ScavTrap::~ScavTrap() {

    std::cout << "\nScavTrap destructor called" << std::endl;

    return ;
}

void    ScavTrap::attack( const std::string& target ) {

    std::cout << "\nScavTrap " << this->ClapTrap::_name << " attacks " << target << ", causing " << this->ClapTrap::_attackDamages << " points of damage!" << std::endl;

    return ;
}

void    ScavTrap::guardGate( void ) {

    std::cout << "ScavTrap entered Gate Keeper mode. 🛡" << std::endl;
    
    return ;
}
