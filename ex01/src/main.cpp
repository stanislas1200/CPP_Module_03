/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:50:04 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/27 15:18:18 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int main(void) {
	ClapTrap clap("Clap");
	
	clap.attack("test");
	clap.takeDamage(5);
	clap.beRepaired(5);

	ScavTrap box("Scav");
	
	box.attack("test");
	box.takeDamage(5);
	box.beRepaired(5);
}