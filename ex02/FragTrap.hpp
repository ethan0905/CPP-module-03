/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:42:29 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 17:25:18 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define MAGENTA "\033[1;35m"

class FragTrap : virtual public ClapTrap{
    
    public:
    
        FragTrap( void );
        FragTrap( std::string name );
        FragTrap( FragTrap const & rhs );
        ~FragTrap( void );
        
        void highFivesGuys(void);

        FragTrap   &operator=( FragTrap const & rhs );

    private:
};

#endif