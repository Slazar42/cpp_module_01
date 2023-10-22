/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:04:41 by slazar            #+#    #+#             */
/*   Updated: 2023/10/22 15:38:12 by slazar           ###   ########.fr       */
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
	
}

void            setName(std::string n);