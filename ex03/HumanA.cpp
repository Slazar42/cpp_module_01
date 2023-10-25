/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:04:41 by slazar            #+#    #+#             */
/*   Updated: 2023/10/24 17:46:16 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon w)
{
	name =n;
	wp = w;
}

void	HumanA::attack()
{
	std::cout<< name << "attacks with their" <<  wp.getType() << std::endl;
}

const std::string&	HumanA::getName()
{
	return (name);
}

void            HumanA::setName(std::string n)
{
	name = n;
}