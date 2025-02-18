/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:00:56 by mhummel           #+#    #+#             */
/*   Updated: 2025/02/18 09:45:48 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	// Create a ClapTrap
	ClapTrap robot("R2D2");
	ClapTrap robot2("C3PO");

	// Test basic functionality
	robot.attack("Enemy");
	robot.takeDamage(5);
	robot.beRepaired(3);

	// Test taking fatal damage with C3PO
    robot2.takeDamage(15);  // More damage than hit points
    robot2.attack("Enemy"); // Should fail due to no hit points
    robot2.beRepaired(5);   // Should fail due to no hit points

	// Test energy points depletion with R2D2
	for (int i = 0; i < 8; ++i)
	{
		robot.attack("Enemy");
	}

	// Should show no energy points left
	robot.attack("Enemy");

	return (0);
}
