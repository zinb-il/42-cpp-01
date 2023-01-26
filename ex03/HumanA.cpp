/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:32:45 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/26 18:04:47 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA()
{
    //std::cout << "The " << this->name << "was destroyed" << std::endl;
}
HumanA::HumanA(std::string nom, Weapon &w) : name(nom), weapon(w)
{
    
}
void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}