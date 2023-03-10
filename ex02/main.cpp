/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:10:11 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/26 12:19:58 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string     str = "HI THIS IS BRAIN";
    std::string*    stringPTR = &str;
    std::string&    stringREF = str;
    
    //Ici on affiche les adresses
    std::cout << "L’adresse de str: " << &str << std::endl;
    std::cout << "L’adresse stockée dans stringPTR: " << stringPTR << std::endl;
    std::cout << "L’adresse stockée dans stringREF: " << &stringREF << std::endl;
    //Ici on affiche les valeurs
    std::cout << "La valeur de str: " << str << std::endl;
    std::cout << "La valeur pointée par stringPTR: " << *stringPTR << std::endl;
    std::cout << "La valeur pointée par stringREF: " << stringREF << std::endl;
}