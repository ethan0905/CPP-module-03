/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:42:27 by esafar            #+#    #+#             */
/*   Updated: 2022/07/19 21:49:21 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
    
    std::cout << GREEN "FragTrap default constructor called" END<< std::endl << std::endl;

    this->_name = "(null)";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamages = 30;

    return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
    
    std::cout << GREEN "FragTrap constructor [" << this->_name << "] called" END << std::endl << std::endl;

    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamages = 30;

    return ;
}

FragTrap::~FragTrap() {

    std::cout << RED "FragTrap destructor called" END << std::endl << std::endl;

    return ;
}

void    FragTrap::highFivesGuys( void ) {

    std::cout << MAGENTA "FragTrap asked for a High Five!" END << std::endl << std::endl;
    return ;
}