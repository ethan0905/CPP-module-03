/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:02:55 by esafar            #+#    #+#             */
/*   Updated: 2022/07/19 22:15:46 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define END "\033[0m"

#define CYAN "\033[1;36m"

class ClapTrap {
    
    public:
    
        ClapTrap( void );
        ClapTrap( std::string name );
        ~ClapTrap( void );
        
        void    attack( const std::string &target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
        
    protected:

        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamages;
};

#endif