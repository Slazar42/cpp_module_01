/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:21:10 by slazar            #+#    #+#             */
/*   Updated: 2023/10/22 15:17:14 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout<< "a Weapon created\n";
}
Weapon::Weapon(std::string t)
{
	std::cout<< type << " Weapon created\n";
	
}
Weapon::~Weapon()
{
	std::cout<< type << " Weapon destroyed\n";
	
}
void            Weapon::setType(std::string t)
{
	type = t;
}
const std::string&    Weapon::getType()
{
	return (type);
}