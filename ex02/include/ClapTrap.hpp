/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:53:22 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/01 13:46:51 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define R			"\x1b[0m"
# define BOLD		"\x1b[1m"
# define RED		"\x1b[1;31m"
# define YELLOW		"\x1b[1;33m"
# define CYAN		"\x1b[1;36m"
# define MAGENTA	"\x1b[1;35m"
# define GRAY		"\x1b[1;90m"
# define GREEN		"\x1b[1;32m"

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& src);
		~ClapTrap(void);
		ClapTrap& operator=(const ClapTrap& src);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	
	protected:
		std::string Name;
		unsigned int hp;
		unsigned int energy;
		unsigned int damage;
};

#endif 