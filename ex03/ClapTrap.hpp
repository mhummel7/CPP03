/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:53:22 by mhummel           #+#    #+#             */
/*   Updated: 2025/03/03 14:52:12 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;

	public:
		// Constructors & Destructor
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		virtual ~ClapTrap();

		// Operator Overload
		ClapTrap& operator=(const ClapTrap& other);

		// Member Functions
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
