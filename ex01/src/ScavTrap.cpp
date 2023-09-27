/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:31:06 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/27 15:17:06 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)  : ClapTrap(name) {
	std::cout << GRAY "ScavTrap : " R BOLD << name << GRAY " create." << std::endl;
	this->Name = name;
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::~ScavTrap(void) {
	std::cout << RED "ScavTrap : " R BOLD << this->Name << RED " destroye." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->energy < 1 || this->hp < 1)
		return std::cout << YELLOW "ScavTrap " GRAY "can't do anything..." << std::endl, (void)NULL;
	this->energy -= 1;
	std::cout << YELLOW "ScavTrap : " R BOLD << this->Name << RED " attacks " R BOLD << target << R " causing " MAGENTA << this->damage << R " points of damage!" ;
	std::cout << R "\tstats after [hp: " MAGENTA << this->hp << R ", E: " MAGENTA << this->energy <<R ", D: " MAGENTA << this->damage << R "]" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (this->energy < 1 || this->hp < 1)
		return std::cout << YELLOW "ScavTrap " GRAY "can't do anything..." << std::endl, (void)NULL;
	this->hp -= amount;
	std::cout << YELLOW "ScavTrap : " R BOLD << this->Name << RED " take " MAGENTA << amount << R " points of damage!" ;
	std::cout << R "\t\t\tstats after [hp: " MAGENTA << this->hp << R ", E: " MAGENTA << this->energy <<R ", D: " MAGENTA << this->damage << R "]" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (this->energy < 1 || this->hp < 1)
		return std::cout << YELLOW "ScavTrap " GRAY "can't do anything..." << std::endl, (void)NULL;
	this->hp += amount;
	std::cout << YELLOW "ScavTrap : " R BOLD << this->Name << GREEN " repair itself for " MAGENTA << amount << R " hp!" ;
	std::cout << R "\t\t\t\tstats after [hp: " MAGENTA << this->hp << R ", E: " MAGENTA << this->energy <<R ", D: " MAGENTA << this->damage << R "]" << std::endl;
}