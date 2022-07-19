/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:02:55 by esafar            #+#    #+#             */
/*   Updated: 2022/07/19 19:27:59 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    
    public:
    
        ClapTrap( void );
        ClapTrap( std::string name );
        ~ClapTrap( void );
        
        void    attack( const std::string& target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
        
    private:

        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamages;
};

#endif