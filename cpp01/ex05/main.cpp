/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <jking-ye@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:05:58 by jking-ye          #+#    #+#             */
/*   Updated: 2022/08/02 20:28:55 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("APPLE");
	harl.complain("INFO");
	harl.complain("APPLE");
	harl.complain("WARNING");
	harl.complain("APPLE");
	harl.complain("ERROR");
	return (0);
}