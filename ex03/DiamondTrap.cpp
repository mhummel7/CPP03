/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:42:55 by mhummel           #+#    #+#             */
/*   Updated: 2025/03/03 15:02:06 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
	std::cout << "DiamondTrap " << name << " created." << std::endl;
	hitPoints = FragTrap::hitPoints;
	attackDamage = FragTrap::attackDamage;
	// Use ScavTrap's energy points
	energyPoints = ScavTrap::energyPoints;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " destroyed." << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	// Use ScavTrap's attack
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap " << name << ", also known as ClapTrap " << ClapTrap::name << std::endl;
}
