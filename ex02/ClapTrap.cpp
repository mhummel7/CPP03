/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:53:29 by mhummel           #+#    #+#             */
/*   Updated: 2025/02/18 09:40:24 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10),
	energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " is constructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name),
	hitPoints(other.hitPoints), energyPoints(other.energyPoints),
	attackDamage(other.attackDamage)
{
	std::cout << "ClapTrap " << name << " is copied!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " is destroyed!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "ClapTrap " << name << " is assigned!" << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no energy points left to attack!" << std::endl;
		return ;
	}
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no hit points left to attack!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints <= amount)
	{
		hitPoints = 0;
	}
	else
	{
		hitPoints -= amount;
	}
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! Hit points remaining: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no energy points left to repair!" << std::endl;
		return ;
	}
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no hit points left to repair!" << std::endl;
		return ;
	}
	energyPoints--;
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " repairs itself for " << amount << " points! Hit points now: " << hitPoints << std::endl;
}
