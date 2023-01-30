/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:44:35 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/30 12:52:47 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::hors_sujet()
{
    std::cout << "[Probably complaining about insignificant problems]" << std::endl;
}

void    Harl::debug()
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my" << std::endl;
    std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger";
    std::cout << ". I really do !" << std::endl << std::endl;
}

void    Harl::info()
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money" << std::endl;
    std::cout << "You didn’t put enough bacon in my burger !" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more !" << std::endl << std::endl;
}

void    Harl::warning()
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you";
    std::cout << "started working here since last month." << std::endl << std::endl;
}
void    Harl::error()
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable ! I want to speak to the manager now.";
    std::cout << std::endl << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*f[5])(void) = {&Harl::hors_sujet, &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string names[5] = {"HORS", "DEBUG", "INFO", "WARNING", "ERROR"};
    int p = 0;
    bool in = false;

    for(int i = 1; i < 5; i++)
    {
        if(names[i] == level)
        {
            in = true;
            p = i;
        }
        switch(p)
        {
            case 1:
                (this->*(f[1]))();
                break;
            case 2:
                (this->*(f[2]))();
                break;
            case 3:
                (this->*(f[3]))();
                break;
            case 4:
                (this->*(f[4]))();
                break;
            default:
                continue;
                break;
        }
        if (in)
            p++;
    }
    if (!p)
         (this->*(f[0]))();
}