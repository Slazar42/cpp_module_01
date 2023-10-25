/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:14:26 by slazar            #+#    #+#             */
/*   Updated: 2023/10/24 17:02:17 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n, Weapon w)
{
	name =n;
	wp = w;
}
HumanB::HumanB(std::string n)
{
	name =n;
}
void	HumanB::attack()
{
	std::cout<< name << "attacks with their" <<  wp.getType() << std::endl;
}
void	HumanB::setWeapon(Weapon w)
{
	wp = w;
}
const std::string&	HumanB::getName()
{
	return (name);
}
void            HumanB::setName(std::string n)
{
	name = n;
}