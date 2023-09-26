/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:57:43 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/26 16:14:27 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name(name), hp(10), energy(10), damage(0) {}

ClapTrap::~ClapTrap(void) {}

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
    std::cout << BOLD << this->Name << RED " attacked " R << target << std::endl;
    this->energy -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    this->hp += amount;
}

