/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:10:11 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/30 11:40:30 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

int main()
{
    Zombie *z = newZombie("Zombie 1");
    z->announce();
    randomChump("Zombie 2");
    delete z;
    return 0;
}