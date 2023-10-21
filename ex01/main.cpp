/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:22:14 by slazar            #+#    #+#             */
/*   Updated: 2023/10/21 23:25:06 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombies;
	zombies = zombieHorde(5, "Zom");
	for(int i = 0;i<5;i++)
		zombies[i].announce();
	delete [] zombies;
}
