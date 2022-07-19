/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:03:02 by esafar            #+#    #+#             */
/*   Updated: 2022/07/19 18:13:21 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
    
    std::cout << "Default constructor called" << std::endl;

    return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name){
    
    std::cout << "Name in parameter constructor called" << std::endl;
    std::cout << "Name : " << name << std::endl;

    return ;
}

ClapTrap::~ClapTrap() {

    std::cout << "Destructor called" << std::endl;

    return ;
}
