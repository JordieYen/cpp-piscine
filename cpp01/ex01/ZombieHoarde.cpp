/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHoarde.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <jking-ye@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:06:07 by jking-ye          #+#    #+#             */
/*   Updated: 2022/07/27 18:06:11 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name)
{
	Zombie	*zombie = new Zombie[n];
	int 	i = 0;

	while (i < n)
	{
		zombie[i].setname(name);
		i++;
	}
	return(zombie);
}