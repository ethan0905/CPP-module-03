/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:03:02 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 17:02:01 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
    
    std::cout << GREEN "ClapTrap: Default constructor called" END << std::endl << std::endl;

    _name = "(null)";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamages = 0;

    return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name){
    
    std::cout << GREEN "ClapTrap: Constructor [" << _name << "] called" END << std::endl << std::endl;

    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamages = 0;

    return ;
}

ClapTrap::ClapTrap( ClapTrap const & rhs ) {
    
    std::cout << "ClapTrap : Copy constructor called" << std::endl;
    *this = rhs;
    
    return ;
}

ClapTrap::~ClapTrap() {

    std::cout << RED "ClapTrap: Destructor called" END << std::endl << std::endl;

    return ;
}

void    ClapTrap::attack( const std::string& target ) {

    std::cout << CYAN "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamages << " points of damage!" END << std::endl;

    std::cout << CYAN << this->_name << " : Current hitpoints: " << this->_hitPoints <<  END << std::endl;
    this->_energyPoints -= 1;
    std::cout << CYAN << this->_name << " : Current energypoints: " << this->_energyPoints << END << std::endl << std::endl;
    return ;
}

void    ClapTrap::takeDamage( unsigned int amount ) {

    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << CYAN "ClapTrap " << this->_name << " took " << amount << " damages!" END << std::endl;
        this->_hitPoints -= amount;
        std::cout << CYAN << this->_name << " : Current hitpoints: " << this->_hitPoints << END << std::endl;
        this->_energyPoints -= 1;
        std::cout << CYAN << this->_name << " : Current energypoints: " << this->_energyPoints << END << std::endl << std::endl;
    }
    
    return ;
}

void    ClapTrap::beRepaired( unsigned int amount ) {

    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        std::cout << CYAN "ClapTrap " << this->_name << " got repaired with " << amount << " extra hitpoints!" END << std::endl;
        this->_hitPoints += amount;
        std::cout << CYAN << this->_name << " : Current hitpoints: " << this->_hitPoints << END << std::endl;
        this->_energyPoints -= 1;
        std::cout << CYAN << this->_name << " : Current energypoints: " << this->_energyPoints << END << std::endl << std::endl;
    }
    else if (this->_hitPoints > 0 && this->_energyPoints == 0)
        std::cout << CYAN << this->_name << " : error: not enought energy points to beRepaired()." END << std::endl << std::endl;
    
    return ;
}

ClapTrap   &ClapTrap::operator=( ClapTrap const & rhs ) {
    
    this->_attackDamages = rhs._attackDamages ;
    this->_energyPoints = rhs._energyPoints;
    this->_hitPoints = rhs._hitPoints;
    this->_name = rhs._name;
    
    return (*this);
}