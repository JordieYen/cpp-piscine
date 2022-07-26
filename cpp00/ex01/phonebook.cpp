/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <jking-ye@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:24:14 by jking-ye          #+#    #+#             */
/*   Updated: 2022/07/22 20:05:10 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact contacts[8];
int	contactindex;

Phonebook::Phonebook()
{
	this->contactindex = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::searchcontact()
{
	std::string	index;
	int		i;

	printbanner();
	std::cout << "           -------------------------------------------------\n";
	std::cout << "           | Index   | First Name | Last Name  | Nick Name |\n";
	std::cout << "           -------------------------------------------------\n";
	for (int i = 0; i < 8; i++) {
		std::cout << "           |    " << (i + 1) << "    | "; 
		this->contacts[i].printcontactname();
	}
	std::cout << "           -------------------------------------------------\n\n\n";
	index = getinput("Input Index of Contact");
	if (isNumber(index))
	{
		if (stoi(index) < 1 || stoi(index) > 8)
			index = "jojo";
	}
	while (isNumber(index) == false)
	{
		std::cout << "INPUT SOMETHING VALID!\n";
		index = getinput("Input Index of Contact");
		if (isNumber(index))
		{
			if (stoi(index) >= 1 && stoi(index) <= 8)
				break;
			else
				index = "jojo";
		}
	}
	i = stoi(index);
	this->contacts[i - 1].printcontact();
}

void	Phonebook::addcontacttobook(Contact contact)
{
	if (this->contactindex == 8)
		this->contactindex = 0;
	this->contacts[this->contactindex] = contact;
	this->contactindex++;
}

void	Phonebook::printbook()
{
	for (int i = 0; i < 8; i++) {
		this->contacts[i].printcontact();
	}
}

std::string	Phonebook::getinput(std::string input)
{
	std::string temp;

	std::cout << input << " : ";
	getline(std::cin, temp);
	while (temp.empty())
	{
		std::cout << "INPUT SOMETHING!\n";
		std::cout << input << " : ";
		getline(std::cin, temp);
	}
	return (temp);
}

bool Phonebook::isNumber(std::string str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (isdigit(str[i]) == 0)
			return false;
		i++;
	}
	return true;
}

void	Phonebook::printbanner(void)
{
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "|  __________.__                        __________               __      |" << "\n";
	std::cout << " ------------------------------------------------------------------------ " << "\n";
	std::cout << "|  \\______   \\  |__   ____   ____   ____\\______   \\ ____   ____ |  | __  |" << "\n";
	std::cout << "|   |     ___/  |  \\ /  _ \\ /    \\_/ __ \\|    |  _//  _ \\ /  _ \\|  |/ /  |" << "\n";
	std::cout << "|   |    |   |   Y  (  <_> )   |  \\  ___/|    |   (  <_> |  <_> )    <   |" << "\n";
	std::cout << "|   |____|   |___|  /\\____/|___|  /\\___  >______  /\\____/ \\____/|__|_ \\  |" << "\n";
	std::cout << "|                 \\/            \\/     \\/       \\/                   \\/  |" << "\n";
	std::cout << " ------------------------------------------------------------------------ " << "\n";
	std::cout << "\n";
	std::cout << "\n";
}