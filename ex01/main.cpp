/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:00:56 by mhummel           #+#    #+#             */
/*   Updated: 2025/02/18 10:50:28 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "=== Testing ClapTrap ===" << std::endl;
	ClapTrap clap("CT-001");
	clap.attack("Enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << "\n=== Testing ScavTrap ===" << std::endl;
	ScavTrap scav("ST-100");
	scav.attack("Enemy");
	scav.takeDamage(20);
	scav.beRepaired(20);
	scav.guardGate();

	std::cout << "\n=== Testing Energy Depletion ===" << std::endl;
	// ScavTrap has 50 energy points, each action costs 1
	for (int i = 0; i < 48; ++i)
	{
		scav.attack("Enemy");
	}
	// Should show no energy points left
	scav.attack("Enemy");

	std::cout << "\n=== Testing Fatal Damage ===" << std::endl;
	ScavTrap scav2("ST-200");
	scav2.takeDamage(150); // More damage than hit points
	scav2.attack("Enemy"); // Should fail due to no hit points
	scav2.beRepaired(50);  // Should fail due to no hit points
	return (0);
}
