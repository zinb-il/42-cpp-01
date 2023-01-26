/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:14:30 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/26 17:50:57 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    //std::cout << "a default Weapon" << std::endl; 
}

 Weapon::Weapon(std::string t) : type(t)
 {
    
 }

Weapon::~Weapon()
{
    //std::cout << "The " << this->type << " was destroyed" << std::endl; 
}

std::string const & Weapon::getType(void) const
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}