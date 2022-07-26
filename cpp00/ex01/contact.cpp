/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <jking-ye@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:11:43 by jking-ye          #+#    #+#             */
/*   Updated: 2022/07/22 20:05:34 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string firstname;
std::string lastname;
std::string nickname;
std::string phonenumber;
std::string secret;

Contact::Contact()
{
	this->firstname = "null";
	this->lastname = "null";
	this->nickname = "null";
	this->phonenumber = "null";
	this->secret = "null";
}

Contact::~Contact()
{
}

void	Contact::setname()
{
	this->firstname = getinput("First Name of Contact");
	this->lastname = getinput("Last Name of Contact");
}

void	Contact::setnickname()
{
	this->nickname = getinput("Nickame of Contact");
}

void	Contact::setphonenumber()
{
	this->phonenumber = getinput("Phone Number of Contact");
}

void	Contact::setsecret()
{
	this->secret = getinput("Darkest secret of Contact");
}

void	Contact::printcontact()
{
	std::cout << "\n--------------------------------\n";
	std::cout << "First Name     : " << this->firstname << "\n";
	std::cout << "Last Name      : " << this->lastname << "\n";
	std::cout << "Nickname       : " << this->nickname << "\n";
	std::cout << "Contact Number : " << this->phonenumber << "\n";
	std::cout << "Darkest Secret : " << this->secret << "\n";
	std::cout << "--------------------------------\n\n";
}

void	Contact::printcontactname()
{
	std::cout << truncatestr(this->firstname) << " | ";
	std::cout << truncatestr(this->lastname) << " | ";
	std::cout << truncatestr(this->nickname) << "|\n";
}

std::string	Contact::getinput(std::string input)
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

std::string	Contact::truncatestr(std::string original)
{
	std::string	ret;
	int		temp;
	int		i;

	i = 0;
	temp = 0;
	while (i < 10)
	{
		if (original[i] == '\0')
			temp = 1;
		if (temp == 0)
		{
			if (i < 9)
				ret += original[i];
			else
				ret += ".";
		}
		else
			ret = " " + ret;
		i++;
	}
	return (ret);
}