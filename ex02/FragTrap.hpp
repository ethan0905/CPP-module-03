/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:42:29 by esafar            #+#    #+#             */
/*   Updated: 2022/07/19 21:44:30 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define MAGENTA "\033[1;35m"

class FragTrap : public ClapTrap{
    
    public:
    
        FragTrap( void );
        FragTrap( std::string name );
        ~FragTrap( void );
        
        void highFivesGuys(void);
        
    private:
};

#endif