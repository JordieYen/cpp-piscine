/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <jking-ye@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:06:01 by jking-ye          #+#    #+#             */
/*   Updated: 2022/08/02 22:03:33 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;
using std::string;

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

// alternate way to write it
// typedef  void (Harl::*complaints)(void);
// complaints	pointerfns[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

void	Harl::complain(string level)
{
	int			i = 0;
	string		levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*complaints[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	while (i < sizeof(levels)/sizeof(levels[0]))
	{
		if (level.compare(levels[i]) == 0)
		{
			switch (i) {
				case 0:
					cout << "\n[DEBUG]\n";
					(this->*complaints[0])();
				case 1:
					cout << "\n[INFO]\n";
					(this->*complaints[1])();
				case 2:
					cout << "\n[WARNING]\n";
					(this->*complaints[2])();
				case 3:
					cout << "\n[ERROR]\n";
					(this->*complaints[3])();
				default:
					cout << "\n";
			}
		}
		i++;
	}
}

void	Harl::debug(void)
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning(void)
{
	cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	cout << "This is unacceptable! I want to speak to the manager now.\n";
}