/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:13:21 by esafar            #+#    #+#             */
/*   Updated: 2022/07/19 20:21:59 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
    
    std::cout << "ScavTrap default constructor called" << std::endl;

    _name = "(null)";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamages = 20;

    return ;
}

ScavTrap::ScavTrap( std::string name ) : _name(name){
    
    std::cout << "ScavTrap constructor [" << _name << "] called" << std::endl;

    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamages = 20;

    return ;
}

ScavTrap::~ScavTrap() {

    std::cout << "\nDestructor called" << std::endl;

    return ;
}

void    ScavTrap::attack( const std::string& target ) {

    std::cout << "\nScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamages << " points of damage!" << std::endl;

    return ;
}

void    ScavTrap::guardGate( void ) {

    std::cout << "ScavTrap entered Gate Keeper mode." << std::endl;
    
    return ;
}

