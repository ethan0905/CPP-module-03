/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:03:02 by esafar            #+#    #+#             */
/*   Updated: 2022/07/20 14:18:16 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
    
    std::cout << CYAN "ClapTrap:: " <<  GREEN "Default constructor called" END << std::endl << std::endl;

    _name = "(null)";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamages = 0;

    return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name){
    
    std::cout << CYAN "ClapTrap:: " << GREEN "Constructor [" << _name << "] called" END << std::endl << std::endl;

    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamages = 0;

    return ;
}

ClapTrap::~ClapTrap() {

    std::cout << CYAN "ClapTrap:: " <<  RED "Destructor called" END << std::endl << std::endl;

    return ;
}

void    ClapTrap::attack( const std::string& target ) {

    std::cout << CYAN "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamages << " points of damage!" END << std::endl;

    std::cout << LIGHTDARK << this->_name << " : " CYAN "Current hitpoints: " << this->_hitPoints <<  END << std::endl;
    this->_energyPoints -= 1;
    std::cout << LIGHTDARK << this->_name << " : " CYAN "Current energypoints: " << this->_energyPoints << END << std::endl << std::endl;
    return ;
}

void    ClapTrap::takeDamage( unsigned int amount ) {

    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << CYAN "ClapTrap " << this->_name << " took " << amount << " damages!" END << std::endl;
        this->_hitPoints -= amount;
        std::cout << LIGHTDARK << this->_name << " : " CYAN "Current hitpoints: " << this->_hitPoints << END << std::endl;
        this->_energyPoints -= 1;
        std::cout << LIGHTDARK << this->_name << " : " CYAN "Current energypoints: " << this->_energyPoints << END << std::endl << std::endl;
    }
    
    return ;
}

void    ClapTrap::beRepaired( unsigned int amount ) {

    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << CYAN "ClapTrap " << this->_name << " got repaired with " << amount << " extra hitpoints!" END << std::endl;
        this->_hitPoints += amount;
        std::cout << LIGHTDARK << this->_name << " : " CYAN "Current hitpoints: " << this->_hitPoints << END << std::endl;
        this->_energyPoints -= 1;
        std::cout << LIGHTDARK << this->_name << " : " CYAN " Current energypoints: " << this->_energyPoints << END << std::endl << std::endl;
    }
    else if (this->_hitPoints > 0 && this->_energyPoints == 0)
        std::cout << LIGHTDARK << this->_name << " : " CYAN " error: not enought energy points to beRepaired()." END << std::endl << std::endl;
    
    return ;
}

