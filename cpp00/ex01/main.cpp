/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <jking-ye@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:33:34 by jking-ye          #+#    #+#             */
/*   Updated: 2022/07/22 20:02:23 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	addcontact(Phonebook *phonebook)
{
	Contact contact;

	std::cout << "\n";
	contact.setname();
	contact.setnickname();
	contact.setphonenumber();
	contact.setsecret();
	phonebook->addcontacttobook(contact);
	std::cout << "\n---------------\n Contact added\n---------------\n\n";
}

int	main(void)
{
	std::string str;
	Phonebook phonebook;

	while (str.compare("EXIT"))
	{
		std::cout << "Keyword > ";
		getline(std::cin, str);
		if (str.compare("ADD") == 0)
			addcontact(&phonebook);
		else if (str.compare("SEARCH") == 0)
			phonebook.searchcontact();
		else if (str.compare("book") == 0)
			phonebook.printbook();
		else
			std::cout << "Input <ADD>, <SEARCH> or <EXIT>\n";
	}
	return (0);
}