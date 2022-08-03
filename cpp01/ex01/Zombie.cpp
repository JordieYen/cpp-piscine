/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <jking-ye@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:06:01 by jking-ye          #+#    #+#             */
/*   Updated: 2022/07/27 18:06:03 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cout;
using std::endl;

Zombie::Zombie(void)
{
	cout << "Zombie Alive" << endl;
	this->name = "defaultnonameboi";
	this->announcement = "brain?";
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " Destroyed\n";
}

void		Zombie::setname(std::string const &name)
{
	this->name = name;
}

void		Zombie::setannouncement(std::string announcement)
{
	this->announcement = announcement;
}

std::string	Zombie::getname(void)
{
	return (this->name);
}

std::string	Zombie::getannouncement(void)
{
	return (this->announcement);
}

void		Zombie::announce(void)
{
	std::cout << this->name << ": " << this->announcement << "\n";
}