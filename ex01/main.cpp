/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:28:02 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/08 18:28:24 by gdaignea         ###   ########.fr       */
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
	int			i = 0;

	while (1) {
		std::cout << "Welcome to your awesome phonebook. Please enter a command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, input);

		if (input.compare("ADD") == 0) {
			phonebook.add_contact(i % 8);
			i++;
		}
		else if (input.compare("SEARCH") == 0) {
			phonebook.display_contact();
		}
		else if (input.compare("EXIT") == 0) {
			return (0);
		}
	}
	return (0);
}
