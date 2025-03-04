/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:57:39 by mhummel           #+#    #+#             */
/*   Updated: 2025/03/04 14:11:33 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "=== Testing ClapTrap ===" << std::endl;
	ClapTrap clap("CT-001");
	clap.attack("Enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << "\n=== Testing ScavTrap ===" << std::endl;
	ScavTrap scav("ST-001");
	scav.attack("Enemy");
	scav.takeDamage(30);
	scav.beRepaired(20);
	scav.guardGate();

	std::cout << "\n=== Testing FragTrap ===" << std::endl;
	FragTrap frag("FT-001");
	frag.attack("Enemy");
	frag.takeDamage(40);
	frag.beRepaired(30);
	frag.highFivesGuys();

	std::cout << "\n=== Testing DiamondTrap ===" << std::endl;
	DiamondTrap diamond("DT-001");
	diamond.attack("Enemy");
	diamond.takeDamage(50);
	diamond.beRepaired(40);
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();

	std::cout << "\n=== Testing Energy Depletion ===" << std::endl;
	// ScavTrap has 50 energy points, each action costs 1
	for (int i = 0; i < 48; ++i)
	{
		scav.attack("Enemy");
	}
	// Should show no energy points left
	scav.attack("Enemy");

	std::cout << "\n=== Testing Fatal Damage ===" << std::endl;
	DiamondTrap diamond2("DT-002");
	diamond2.takeDamage(200); // More damage than hit points
	diamond2.attack("Enemy"); // Should fail due to no hit points
	diamond2.beRepaired(50);  // Should fail due to no hit points
	return (0);
}
