/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:02:57 by slazar            #+#    #+#             */
/*   Updated: 2023/10/24 17:20:17 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t)
{
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

Weapon::Weapon()
{
}
