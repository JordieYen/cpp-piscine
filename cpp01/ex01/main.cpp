/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <jking-ye@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:05:58 by jking-ye          #+#    #+#             */
/*   Updated: 2022/07/27 18:06:00 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int i = 0;
	int n = 5;
	Zombie *zombie;
	
	zombie = zombieHorde(n, "monke");
	while (i < n)
	{
		zombie[i].announce();
		i++;
	}
	delete[] zombie;
	return (0);
}