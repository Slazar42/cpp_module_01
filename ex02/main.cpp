/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:34:06 by slazar            #+#    #+#             */
/*   Updated: 2023/10/21 23:59:08 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *str_ptr = &str;
    std::string& str_ref = str;
    
    std::cout << "Address of str : "<< &str << std::endl;
    std::cout << "Address of str_ptr : "<< &str_ptr << std::endl;
    std::cout << "Address of str_ref : "<< &str_ref << std::endl << std::endl;

    std::cout << "Value of str : "<< str << std::endl;
    std::cout << "Value of str_ptr : "<< *str_ptr << std::endl;
    std::cout << "Value of str_ref : "<< str_ref << std::endl;
}