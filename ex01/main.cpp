/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gautier <gautier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:28:02 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/12 15:41:45 by gautier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool	is_digit(std::string str) {

	for (int i = 0; str[i]; i++) {
		if (!std::isdigit(str[i])) {
			return false;
			break ;
		}
	}
	return (true);
}

int	main(void) {

	PhoneBook	phonebook;
	std::string	input;
	int			index = 0;
	phonebook.nb_contact = 0;
	

	std::cout << std::endl << CYAN << "HELLO FRIEND ! WELCOME TO YOUR AWESOME PHONEBOOK" << RESET 
				<< std::endl << std::endl;
	while (input.compare("EXIT") != 0) {
		std::cout << MAGENTA << "Please enter a command (ADD, SEARCH or EXIT) : " << RESET;
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0) {
			if (phonebook.nb_contact < 8)
				phonebook.nb_contact++;
			phonebook.add_contact(index % 8);
			index++;
		}
		else if (input.compare("SEARCH") == 0) {
			phonebook.display_contact();
		}
	}
	return (0);
}
