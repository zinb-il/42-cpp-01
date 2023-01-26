/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:14:51 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/26 17:30:19 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class  Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string t);
        ~Weapon();
        std::string const & getType(void) const;
        void setType(std::string type);
};

# endif