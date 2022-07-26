/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <jking-ye@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:18:37 by jking-ye          #+#    #+#             */
/*   Updated: 2022/07/22 20:04:37 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string.h>
# include "contact.hpp"

class	Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);

		void	searchcontact(void);
		void	addcontacttobook(Contact contact);
		void	printbook(void);
		
	private:
		Contact contacts[8];
		int	contactindex;

		std::string	getinput(std::string input);
		bool		isNumber(std::string str);
		void		printbanner(void);
};

#endif