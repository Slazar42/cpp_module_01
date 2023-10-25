/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:14:26 by slazar            #+#    #+#             */
/*   Updated: 2023/10/25 16:43:57 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	std::cout << "HumanB : default constructor called" << std::endl;

}
HumanB::HumanB(std::string n)
{
	wp = NULL;
	std::cout << "HumanB : parametrized constructor called" << std::endl;
	name =n;
}
void	HumanB::attack()
{
	if(wp != NULL && wp.getType().length() > 0)
		std::cout<< name << " attacks with their " <<  (*wp).getType() << std::endl;
	else
		std::cout<< name << " attacks with bare hands  " <<std::endl;
}
void	HumanB::setWeapon(Weapon &w)
{
	wp = &w;
}
const std::string&	HumanB::getName()
{
	return (name);
}
void            HumanB::setName(std::string n)
{
	name = n;
}