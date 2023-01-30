/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:10:11 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/30 13:34:44 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "header.h"

int main(int ac, char **av)
{
    if (ac != 4)
        exitFunction("Les paramètres passés sont incorrects");
    if (static_cast<std::string>(av[1]).empty() || static_cast<std::string>(av[2]).empty() \
    || static_cast<std::string>(av[3]).empty())
        exitFunction("Les paramètres passés sont vides");
    Replace rp(static_cast<std::string>(av[1]));
    if (!rp.getInputfile()->good())
        exitFunction("Une erreur s'est produite lors de l'ouverture du fichier");
    rp.setOutputfile();
    if (!rp.getOutputfile()->good())
        exitFunction("Une erreur s'est produite lors de l'ouverture du fichier");
    rp.read_replace_file(static_cast<std::string>(av[2]), static_cast<std::string>(av[3]));
    return 0;
}