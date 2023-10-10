/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:50:04 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/10 16:04:33 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int main(void) {
	ClapTrap clap("Clap");
	
	clap.attack("test");
	clap.takeDamage(5);
	clap.beRepaired(5);

	std::cout << "\n";
	ScavTrap scav("Scav");
	
	scav.attack("test");
	scav.takeDamage(5);
	scav.beRepaired(5);
	scav.guardGate();
	
	std::cout << "\n";
	FragTrap frag("Frag");
	
	frag.attack("test");
	frag.takeDamage(5);
	frag.beRepaired(5);
	frag.highFivesGuys();
	
	std::cout << "\n";
	DiamondTrap diamond("Diamond");
	diamond.attack("test");
	diamond.takeDamage(5);
	diamond.beRepaired(5);
	diamond.whoAmI();
	diamond.highFivesGuys();
	diamond.guardGate();
	
	std::cout << "\n";
}