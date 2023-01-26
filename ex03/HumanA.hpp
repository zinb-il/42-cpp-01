/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:27:58 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/26 17:59:58 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class   HumanA
{
    private:
        std::string name;
        Weapon      &weapon;
    public:
        ~HumanA();
        HumanA(std::string nom, Weapon &w);
        void    attack(void);
};

#endif