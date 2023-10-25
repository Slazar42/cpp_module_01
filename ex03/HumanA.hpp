/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:21:14 by slazar            #+#    #+#             */
/*   Updated: 2023/10/25 10:01:21 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
    Weapon& wp;
    std::string name;
    public :
	HumanA(std::string n, Weapon& w);

    void            attack();
    const std::string&	getName();
    void            setName(std::string n);
};

#endif