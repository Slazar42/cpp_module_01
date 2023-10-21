/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:28:25 by slazar            #+#    #+#             */
/*   Updated: 2023/10/21 23:22:11 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie {

	std::string name;
	public:
		Zombie();
		Zombie(std::string n);
		~Zombie();
		void	SetName(std::string n);
		void	announce();
};

Zombie* zombieHorde(int N, std::string n );

#endif