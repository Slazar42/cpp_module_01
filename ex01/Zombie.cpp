/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:02:42 by slazar            #+#    #+#             */
/*   Updated: 2023/10/21 22:44:19 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}
Zombie::Zombie(std::string n)
{
	name = n;
	std::cout << "Zombie " << name << " is born\n";
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " is dead\n";
}

void	Zombie::announce()
{
	std::cout << name << " : Braiiiiiiinnnssss...\n";
}