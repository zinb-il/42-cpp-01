/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:06:33 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/26 11:54:18 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#	endif