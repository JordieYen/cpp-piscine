/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <jking-ye@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:05:53 by jking-ye          #+#    #+#             */
/*   Updated: 2022/07/27 18:05:55 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	public:
		Zombie(void);
		~Zombie(void);

		void		setname(std::string const &name);
		void		setannouncement(std::string announcement);
		std::string	getname(void);
		std::string	getannouncement(void);
		void		announce(void);

	private:
		std::string name;
		std::string	announcement;
		
};


Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif