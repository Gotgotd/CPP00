/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:13:04 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/08 18:24:21 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void) {
}

PhoneBook::~PhoneBook(void) {}

std::string	add_entry(std::string field) {

	std::string	input;

	while (input.empty()) {
		std::cout << field;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "field cannot be empty" << std::endl;
	}
	return input;
}

void PhoneBook::add_contact(int i) {

	contact[i].setFirstName(add_entry("First name : "));
	contact[i].setLastName(add_entry("Last name : "));
	contact[i].setNickname(add_entry("Nickname : "));
	contact[i].setPhoneNumber(add_entry("Phone number : "));
	contact[i].setDarkestSecret(add_entry("Darkest secret : "));
}


