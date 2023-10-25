/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:04:39 by slazar            #+#    #+#             */
/*   Updated: 2023/10/25 15:46:10 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void){
	std::cout << "\033[33mI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\033[0m" << std::endl;
}
void	Harl::info(void){
	std::cout << "\001\033[1;95m\002I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\033[0m" << std::endl;
}
void	Harl::warning(void){
	std::cout << "\033[38;2;255;165;0mI think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\033[0m" << std::endl;
}
void	Harl::error(void){
	std::cout << "\033[91mThis is unacceptable, I want to speak to the manager now.\033[0m" << std::endl;
}

void Harl::complain(std::string level) {
	if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
	{
		std::cout << "\033[91m[ Probably complaining about insignificant problems ]\033[0m" << std::endl;
		return;
	}
    void (Harl::*ptr_to_function[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string lev[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = -1;
    while (++i < 4) {
        if (lev[i] == level) {
            (this->*ptr_to_function[i])();
			if (i < 3)
            	Harl::complain(lev[i+1]);
        }
    }
}