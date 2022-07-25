/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:42:27 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 17:37:09 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
    
    std::cout << MAGENTA "FragTrap:: " << GREEN "Default constructor called" END<< std::endl << std::endl;

    this->_name = "(null)";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamages = 30;

    // std::cout << LIGHTDARK << this->_name << " : " MAGENTA "Current hitpoints: " << this->_hitPoints << END << std::endl;
    // this->_energyPoints -= 1;
    // std::cout << LIGHTDARK << this->_name << " : " MAGENTA "Current energypoints: " << this->_energyPoints << END << std::endl << std::endl;

    return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
    
    std::cout << MAGENTA "FragTrap:: " << GREEN "Constructor " LIGHTDARK "[" << this->_name << "]" GREEN " called" END << std::endl << std::endl;

    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamages = 30;

    // std::cout << LIGHTDARK << this->_name << " : " MAGENTA "Current hitpoints: " << this->_hitPoints << END << std::endl;
    // this->_energyPoints -= 1;
    // std::cout << LIGHTDARK << this->_name << " : " MAGENTA "Current energypoints: " << this->_energyPoints << END << std::endl << std::endl;

    return ;
}

FragTrap::FragTrap( FragTrap const & rhs ) {

    std::cout << MAGENTA "FragTrap:: " << GREEN "Copy constructor called" END << std::endl;
    *this = rhs;
    
    return ;
}


FragTrap::~FragTrap() {

    std::cout << MAGENTA "FragTrap:: " << RED "destructor called" END << std::endl << std::endl;

    return ;
}

void    FragTrap::highFivesGuys( void ) {

    std::cout << MAGENTA "FragTrap asked for a High Five!" END << std::endl << std::endl;
    return ;
}

FragTrap   &FragTrap::operator=( FragTrap const & rhs ) {
    
    this->FragTrap::_attackDamages = rhs._attackDamages ;
    this->FragTrap::_energyPoints = rhs._energyPoints;
    this->FragTrap::_hitPoints = rhs._hitPoints;
    this->FragTrap::_name = rhs._name;
    
    return (*this);
}
