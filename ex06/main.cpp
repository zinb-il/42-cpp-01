 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:10:11 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/28 21:47:50 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.h"

int main(int ac, char **av)
{
    Harl h;

    if (ac != 2)
        std::cout << "Les paramètres passés sont incorrects" << std::endl;
    else
        h.complain(av[1]);
    return 0;
}