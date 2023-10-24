/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:35:58 by slazar            #+#    #+#             */
/*   Updated: 2023/10/22 21:52:28 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
    Weapon wp;
    std::string name;
    public :
	HumanB(std::string n, Weapon w);
	HumanB(std::string n);
    void            	setName(std::string n);
    const std::string&	getName();
    void            	attack();
};


#endif