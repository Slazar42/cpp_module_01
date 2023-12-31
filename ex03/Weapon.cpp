/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:02:57 by slazar            #+#    #+#             */
/*   Updated: 2023/10/25 11:51:41 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon : default constructor called" << std::endl;
}
Weapon::Weapon(std::string t)
{
	std::cout << "Weapon : parametrized constructor called" << std::endl;
	type = t;
}

const std::string&    Weapon::getType()
{
	return (type);
}

void            Weapon::setType(std::string t)
{
	type = t;
}

