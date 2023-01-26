/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:10:11 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/26 12:01:48 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

int main()
{
    Zombie *z = newZombie("Zombie");
    z->announce();
    randomChump("Random Zombie");
    delete z;
    return 0;
}