/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:02:59 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/26 11:46:28 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        Zombie(std::string n);
        void        setName(std::string name);
        std::string getName(void) const;
        void        announce(void) const;
};

#   endif
