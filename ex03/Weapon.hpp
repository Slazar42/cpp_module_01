/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:20:32 by slazar            #+#    #+#             */
/*   Updated: 2023/10/22 14:47:53 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>

class Weapon
{
    std::string type;
    public :
	Weapon();
	Weapon(std::string t);
    const std::string&    getType();
    void            setType(std::string t);
};

#endif