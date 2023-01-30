/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:32:45 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/30 11:53:12 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB()
{
}
HumanB::HumanB(std::string nom) : name(nom), weapon(NULL)
{
}
void    HumanB::attack(void)
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon" << std::endl;
}

 void    HumanB::setWeapon(Weapon *w)
 {
   this->weapon = w;
 }