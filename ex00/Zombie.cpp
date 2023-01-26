/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:03:17 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/26 12:03:28 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string n) : name(n)
{
}

Zombie::~Zombie()
{
    std::cout << this->name << ": is is destroyed" << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName(void) const
{
    return (this->name);
}

void Zombie::announce(void) const
{
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
