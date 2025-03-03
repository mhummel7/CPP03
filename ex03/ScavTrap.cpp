/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 10:24:03 by mhummel           #+#    #+#             */
/*   Updated: 2025/03/03 14:56:24 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " was made by god!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " is walking in a black hole!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (energyPoints == 0)
	{
		std::cout << "ScavTrap " << name << " has no stupid energy points left to kill the other!" << std::endl;
		return ;
	}
	if (hitPoints == 0)
	{
		std::cout << "ScavTrap " << name << " has no stupid hit points left to kill the other!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ScavTrap " << name << " brutally attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " has entered the Gate keeper mode!" << std::endl;
}
