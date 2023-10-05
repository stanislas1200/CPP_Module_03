/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:43:45 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/05 13:50:38 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << GRAY "FragTrap : " R BOLD "Default" GRAY " create." << std::endl;
	this->Name = "Default";
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(std::string name)  : ClapTrap(name) {
	std::cout << GRAY "FragTrap : " R BOLD << name << GRAY " create." << std::endl;
	this->Name = name;
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
	std::cout << GRAY "FragTrap : " R BOLD << src.Name << GRAY " create." << std::endl;
	this->Name = src.Name;
	this->hp = src.hp;
	this->energy = src.energy;
	this->damage = src.damage;
}

FragTrap::~FragTrap(void) {
	std::cout << RED "FragTrap : " R BOLD << this->Name << RED " destroye." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
	if (this != &src)
	{
		Name = src.Name;
		hp = src.hp;
		energy = src.energy;
		damage = src.damage;   
	}
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << MAGENTA "FragTrap : " R BOLD << this->Name << R << " request a High Fives!" << std::endl;
}