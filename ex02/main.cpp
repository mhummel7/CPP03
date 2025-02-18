/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:00:56 by mhummel           #+#    #+#             */
/*   Updated: 2025/02/18 12:14:45 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "=== Testing ClapTrap ===" << std::endl;
	ClapTrap clap("CT-005");
	clap.attack("Enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << "\n=== Testing FragTrap ===" << std::endl;
	FragTrap frag("ST-500");
	frag.attack("Enemy");
	frag.takeDamage(30);
	frag.beRepaired(30);
	frag.highFivesGuys();

	std::cout << "\n=== Testing Energy Depletion ===" << std::endl;
	// fragTrap has 100 energy points, each action costs 1
	for (int i = 0; i < 98; ++i)
	{
		frag.attack("Enemy");
	}
	// Should show no energy points left
	frag.attack("Enemy");

	std::cout << "\n=== Testing Fatal Damage ===" << std::endl;
	FragTrap frag2("ST-800");
	frag2.takeDamage(150); // More damage than hit points
	frag2.attack("Enemy"); // Should fail due to no hit points
	frag2.beRepaired(50);  // Should fail due to no hit points
	return (0);
}
