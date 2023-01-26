/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:41:26 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/26 18:11:10 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class   HumanB
{
    private:
        std::string name;
        Weapon      *weapon;
    public:
        ~HumanB();
        HumanB(std::string nom);
        void    attack(void);
        void    setWeapon(Weapon *w);
};

#endif