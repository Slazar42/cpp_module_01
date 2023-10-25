/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:35:58 by slazar            #+#    #+#             */
/*   Updated: 2023/10/25 11:52:36 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
    Weapon *wp;
    std::string name;
    public :
	HumanB(std::string n);
	HumanB();
    void            	setName(std::string n);
    const std::string&	getName();
    void                setWeapon(Weapon &w);
    void            	attack();
};


#endif