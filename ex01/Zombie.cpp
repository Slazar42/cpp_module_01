/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:02:42 by slazar            #+#    #+#             */
/*   Updated: 2023/10/21 23:18:00 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie is born\n";
}
Zombie::Zombie(std::string n)
{
	name = n;
	std::cout << "Zombie " << name << " is born\n";
}
void	Zombie::SetName(std::string n)
{
	name = n;
}
Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " is dead\n";
}

void	Zombie::announce()
{
	std::cout << name << " : Braiiiiiiinnnssss...\n";
}