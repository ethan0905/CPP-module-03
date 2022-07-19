/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:13:25 by esafar            #+#    #+#             */
/*   Updated: 2022/07/19 22:20:38 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define YELLOW "\033[1;33m"

class ScavTrap : virtual public ClapTrap{
    
    public:
    
        ScavTrap( void );
        ScavTrap( std::string name );
        ~ScavTrap( void );
        
        void    attack( const std::string& target );
        void    guardGate( void );
        
    private:
};

#endif