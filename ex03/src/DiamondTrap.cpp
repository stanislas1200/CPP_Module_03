/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:08:24 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/10 16:01:01 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Default_clap_name") {
	std::cout << GRAY "DiamondTrap : " R BOLD "Default" GRAY " create." << std::endl;
	this->Name = "Default";
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(std::string name)  : ClapTrap(name + "_clap_name") {
	std::cout << GRAY "DiamondTrap : " R BOLD << name << GRAY " create." << std::endl;
	this->Name = name;
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(src), FragTrap(src), ScavTrap(src) {
	std::cout << GRAY "DiamondTrap : " R BOLD << src.Name << GRAY " create." << std::endl;
	this->Name = src.Name;
	this->hp = src.hp;
	this->energy = src.energy;
	this->damage = src.damage;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << RED "DiamondTrap : " R BOLD << this->Name << RED " destroye." R << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src) {
	if (this != &src)
	{
		Name = src.Name;
		hp = src.hp;
		energy = src.energy;
		damage = src.damage;   
	}
	return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << BOLD << "DiamondTrap Name : " MAGENTA << this->Name << R BOLD "\nClapTrap Name: " MAGENTA << ClapTrap::Name << R << std::endl;
}