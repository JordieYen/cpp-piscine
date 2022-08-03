/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <jking-ye@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:05:58 by jking-ye          #+#    #+#             */
/*   Updated: 2022/08/02 22:12:32 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;
using std::string;

int	main(int argc, char **argv)
{
	Harl		harl;
	string		input;

	if (argc == 2)
	{
		input = argv[1];
		int			i = 0;
		string		levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		while (i < sizeof(levels)/sizeof(levels[0]))
		{
			if (input.compare(levels[i]) == 0)
			{
				harl.complain(input);
				break;
			}
			else if(i == sizeof(levels)/sizeof(levels[0]) - 1)
				i = -2;
			i++;
		}
		if (i == -1)
			cout << "Dumb Harl complaining again...\n";
	}
	else
		cout << "Input something Harl understands...\n";
	return (0);
}