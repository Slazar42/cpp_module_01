/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:28:25 by slazar            #+#    #+#             */
/*   Updated: 2023/10/21 21:41:49 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie {

	std::string name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce();
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif