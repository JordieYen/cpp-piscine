/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <jking-ye@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:05:02 by jking-ye          #+#    #+#             */
/*   Updated: 2022/07/22 20:04:25 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string.h>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);

		void	setname(void);
		void	setnickname(void);
		void	setphonenumber(void);
		void	setsecret(void);
		void	printcontact(void);
		void	printcontactname(void);

	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string secret;

		std::string	getinput(std::string input);
		std::string	truncatestr(std::string original);
		
};

#endif