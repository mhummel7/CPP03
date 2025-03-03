/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 10:24:09 by mhummel           #+#    #+#             */
/*   Updated: 2025/03/03 14:56:11 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		// Constructors & Destructor
		FragTrap(const std::string& name);
		~FragTrap();

		// Member Functions
		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif
