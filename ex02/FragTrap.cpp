/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 10:24:03 by mhummel           #+#    #+#             */
/*   Updated: 2025/02/18 12:08:03 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " was made by a gloriuos god!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " is walking in a misterious black hole!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (energyPoints == 0)
	{
		std::cout << "FragTrap " << name << " has no stupid energy points left to kill the other!" << std::endl;
		return ;
	}
	if (hitPoints == 0)
	{
		std::cout << "FragTrap " << name << " has no stupid hit points left to kill the other!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "FragTrap " << name << " brutally attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " gives everyone a big highFive!" << std::endl;
}
