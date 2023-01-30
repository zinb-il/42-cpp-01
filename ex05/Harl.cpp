/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:44:35 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/30 12:49:06 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::debug()
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my";
    std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger";
    std::cout << ". I really do !" << std::endl;
}

void    Harl::info()
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money";
    std::cout << "You didn’t put enough bacon in my burger !";
    std::cout << "If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Harl::warning()
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.";
    std::cout << "I’ve been coming for years whereas you";
    std::cout << "started working here since last month." << std::endl;
}
void    Harl::error()
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i = 0; i < 4; i++)
    {
        if(names[i] == level)
            (this->*(f[i]))();
    }
}