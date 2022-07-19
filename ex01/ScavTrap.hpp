/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:13:25 by esafar            #+#    #+#             */
/*   Updated: 2022/07/19 20:18:11 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap {
    
    public:
    
        ScavTrap( void );
        ScavTrap( std::string name );
        ~ScavTrap( void );
        
        void    attack( const std::string& target );
        void    guardGate( void );
        
    private:

        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamages;
};

#endif