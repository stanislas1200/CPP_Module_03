/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:50:04 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/26 17:26:57 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main(void) {
	ClapTrap box("Box");
	
	box.attack("test");
	box.takeDamage(5);
	box.beRepaired(5);
}