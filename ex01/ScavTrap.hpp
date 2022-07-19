/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:13:25 by esafar            #+#    #+#             */
/*   Updated: 2022/07/19 20:56:04 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    
    public:
    
        ScavTrap( void );
        ScavTrap( std::string name );
        ~ScavTrap( void );
        
        void    attack( const std::string& target );
        void    guardGate( void );
        
    private:
};

#endif