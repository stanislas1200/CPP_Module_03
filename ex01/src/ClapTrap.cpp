/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:57:43 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/26 17:24:51 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name(name), hp(10), energy(10), damage(0) {
	std::cout << GRAY "ClapTrap : " R BOLD << name << GRAY " create." << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << RED "ClapTrap : " R BOLD << this->Name << RED " destroye." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
	if (this != &src)
	{
		hp = src.hp;
		energy = src.energy;
		damage = src.damage;   
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->energy < 1 || this->hp < 1)
		return std::cout << CYAN "ClapTrap " GRAY "can't do anything..." << std::endl, (void)NULL;
	this->energy -= 1;
	std::cout << CYAN "ClapTrap : " R BOLD << this->Name << RED " attacks " R BOLD << target << R " causing " MAGENTA << this->damage << R " points of damage!" ;
	std::cout << R "\t\tstats after [hp: " MAGENTA << this->hp << R ", E: " MAGENTA << this->energy <<R ", D: " MAGENTA << this->damage << R "]" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->energy < 1 || this->hp < 1)
		return std::cout << CYAN "ClapTrap " GRAY "can't do anything..." << std::endl, (void)NULL;
	this->hp -= amount;
	std::cout << CYAN "ClapTrap : " R BOLD << this->Name << RED " take " MAGENTA << amount << R " points of damage!" ;
	std::cout << R "\t\t\t\tstats after [hp: " MAGENTA << this->hp << R ", E: " MAGENTA << this->energy <<R ", D: " MAGENTA << this->damage << R "]" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energy < 1 || this->hp < 1)
		return std::cout << CYAN "ClapTrap " GRAY "can't do anything..." << std::endl, (void)NULL;
	this->hp += amount;
	std::cout << CYAN "ClapTrap : " R BOLD << this->Name << GREEN " repair itself for " MAGENTA << amount << R " hp!" ;
	std::cout << R "\t\t\t\tstats after [hp: " MAGENTA << this->hp << R ", E: " MAGENTA << this->energy <<R ", D: " MAGENTA << this->damage << R "]" << std::endl;
}

