/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:31:06 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/26 17:38:23 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)  : Name(name), hp(10), energy(10), damage(0) {
	std::cout << GRAY "ScavTrap : " R BOLD << name << GRAY " create." << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << RED "ScavTrap : " R BOLD << this->Name << RED " destroye." << std::endl;
}