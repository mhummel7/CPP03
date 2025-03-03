/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 10:24:09 by mhummel           #+#    #+#             */
/*   Updated: 2025/03/03 14:56:22 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		// Constructors & Destructor
		ScavTrap(const std::string& name);
		~ScavTrap();

		// Member Functions
		void attack(const std::string& target);
		void guardGate();
};

#endif
