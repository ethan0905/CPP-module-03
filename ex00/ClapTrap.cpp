/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:03:02 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 16:55:27 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
    
    std::cout << "Default constructor called" << std::endl;

    _name = "(null)";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamages = 0;

    return ;
}

ClapTrap::ClapTrap( ClapTrap const & rhs ) {
    
    std::cout << "Default constructor called" << std::endl;
    *this = rhs;
    
    return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name){
    
    std::cout << "Constructor [" << _name << "] called" << std::endl;

    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamages = 0;

    return ;
}

ClapTrap::~ClapTrap() {

    std::cout << "\nDestructor called" << std::endl;

    return ;
}

void    ClapTrap::attack( const std::string& target ) {

    std::cout << "\nClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamages << " points of damage!" << std::endl;

    std::cout << this->_name << " : Current hitpoints: " << this->_hitPoints << std::endl;
    this->_energyPoints -= 1;
    std::cout << this->_name << " : Current energypoints: " << this->_energyPoints << std::endl;
    return ;
}

void    ClapTrap::takeDamage( unsigned int amount ) {

    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << "\nClapTrap " << this->_name << " took " << amount << " damages!" << std::endl;
        this->_hitPoints -= amount;
        std::cout << this->_name << " : Current hitpoints: " << this->_hitPoints << std::endl;
        this->_energyPoints -= 1;
        std::cout << this->_name << " : Current energypoints: " << this->_energyPoints << std::endl;
    }
    
    return ;
}

void    ClapTrap::beRepaired( unsigned int amount ) {

    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << "\nClapTrap " << this->_name << " got repaired with " << amount << " extra hitpoints!" << std::endl;
        this->_hitPoints += amount;
        std::cout << this->_name << " : Current hitpoints: " << this->_hitPoints << std::endl;
        this->_energyPoints -= 1;
        std::cout << this->_name << " : Current energypoints: " << this->_energyPoints << std::endl;
    }
    else if (this->_hitPoints > 0 && this->_energyPoints == 0)
        std::cout << "\n" << this->_name << " : error: not enought energy points to beRepaired()." << std::endl;
    
    return ;
}

ClapTrap   &ClapTrap::operator=( ClapTrap const & rhs ) {
    
    this->_attackDamages = rhs._attackDamages ;
    this->_energyPoints = rhs._energyPoints;
    this->_hitPoints = rhs._hitPoints;
    this->_name = rhs._name;
    
    return (*this);
}

