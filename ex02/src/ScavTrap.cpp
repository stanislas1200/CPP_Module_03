/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:31:06 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/05 13:53:33 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << GRAY "ScavTrap : " R BOLD "Default" GRAY " create." << std::endl;
	this->Name = "Default";
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(std::string name)  : ClapTrap(name) {
	std::cout << GRAY "ScavTrap : " R BOLD << name << GRAY " create." << std::endl;
	this->Name = name;
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
	std::cout << GRAY "ScavTrap : " R BOLD << src.Name << GRAY " create." << std::endl;
	this->Name = src.Name;
	this->hp = src.hp;
	this->energy = src.energy;
	this->damage = src.damage;
}

ScavTrap::~ScavTrap(void) {
	std::cout << RED "ScavTrap : " R BOLD << this->Name << RED " destroye." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
	if (this != &src)
	{
		Name = src.Name;
		hp = src.hp;
		energy = src.energy;
		damage = src.damage;   
	}
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (this->energy < 1 || this->hp < 1)
		return std::cout << YELLOW "ScavTrap " GRAY "can't do anything..." << std::endl, (void)NULL;
	this->energy -= 1;
	std::cout << YELLOW "ScavTrap : " R BOLD << this->Name << RED " attacks " R BOLD << target << R " causing " MAGENTA << this->damage << R " points of damage!" ;
	std::cout << R "\t\tstats after [hp: " MAGENTA << this->hp << R ", E: " MAGENTA << this->energy <<R ", D: " MAGENTA << this->damage << R "]" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << MAGENTA "ScavTrap : " R BOLD << this->Name << R << " is now in " MAGENTA "Gate keeper " R "mode." << std::endl;
}