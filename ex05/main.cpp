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

int main()
{
    Harl h;

    h.complain("debug");
    h.complain("bacon");
    h.complain("burger");
    h.complain("DEBUG");
    h.complain("INFO");
    h.complain("WARNING");
    h.complain("ERROR");
    return 0;
}