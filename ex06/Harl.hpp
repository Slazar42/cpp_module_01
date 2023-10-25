/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:03:49 by slazar            #+#    #+#             */
/*   Updated: 2023/10/25 14:12:25 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl{
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	public :
		void	complain(std::string level);
};

#endif