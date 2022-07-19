/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:58:10 by esafar            #+#    #+#             */
/*   Updated: 2022/07/19 22:20:31 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define WHITE "\033[1;37m"

class DiamondTrap : public ScavTrap, public FragTrap{
    
    public:
    
        DiamondTrap( void );
        DiamondTrap( std::string name );
        ~DiamondTrap( void );
        
        void    attack( std::string const &target );
        void    whoAmI( void );
        
    private:

        std::string _name;
};

#endif