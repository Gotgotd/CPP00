/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:13:04 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/23 11:19:27 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <sstream>
#include "phonebook.hpp"
#include <cstdlib>

//constructor && destructor
PhoneBook::PhoneBook(void) {}
PhoneBook::~PhoneBook(void) {}

std::string	add_entry(std::string field, int flag) {

	std::string	input;
	bool		check_entry = true;

	while (input.empty() && check_entry) {
		std::cout << field;
		std::getline(std::cin, input);
		if (std::cin.fail()) {
			check_entry = false;
			std::cout << "Error : entry is closed. Please relaunch your phonebook" << std::endl;
			exit(1);
		}
		if (input.empty())
			std::cout << "field cannot be empty" << std::endl;
		if (flag == 1) {
			if (!is_digit(input)) {
				std::cout << RED << "error. Phone number must contain only digits" << RESET << std::endl;
				return add_entry(field, 1);
			}
		}
	}
	return input;
}

void PhoneBook::add_contact(int i) {

	contact[i].setFirstName(add_entry("First name : ", 0));
	contact[i].setLastName(add_entry("Last name : ", 0));
	contact[i].setNickname(add_entry("Nickname : ", 0));
	contact[i].setPhoneNumber(add_entry("Phone number : ", 1));
	contact[i].setDarkestSecret(add_entry("Darkest secret : ", 0));
	std::cout << GREEN << "contact added successfully !" << RESET << std::endl << std::endl ;
}

std::string	resize(std::string data) {

	std::string	new_data;

	if (data.length() > 10) {
		new_data = data.substr(0, 10);
		new_data[9] = '.';
		return new_data;
	}
	return data;
}

void	PhoneBook::display_contact_sheet(int index) {

	if (index > 0 && index <= 8) {
		std::cout << std::endl;
		std::cout << MAGENTA << "contact n." << index << " :" << RESET << std::endl;
		std::cout << "First name : " << contact[index - 1].getFirstName() << std::endl;
		std::cout << "Last name : " << contact[index - 1].getLastName() << std::endl;
		std::cout << "Nickname : " << contact[index - 1].getNickname() << std::endl;
		std::cout << "Phone number : " << contact[index - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret : " << contact[index - 1].getDarkestSecret() << std::endl << std::endl;
	}
}

int	ft_atoi(const std::string& str) {

	std::stringstream ss(str);
	int result;
	
	ss >> result;
	return result;
}

void	PhoneBook::get_contact_sheet(void) {

	std::string	input;
	int			index;
	bool		check_entry = true;

	while (input.empty() && check_entry) {
		std::cout << "Enter index number to display the contact : ";
		std::getline(std::cin, input);
		index = ft_atoi(input);
		if (std::cin.fail()) {
			check_entry = false;
			std::cout << "Error : entry is closed. Please relaunch your phonebook" << std::endl;
			exit(1);
		}
		if (input.empty() || !is_digit(input)) {
			std::cout << RED << "please enter an index number" << RESET << std::endl;
			return get_contact_sheet();
		}
		else if (!(index > 0 && index <= nb_contact)) {
			std::cout << RED << "no contact for this index" << RESET << std::endl;
			return get_contact_sheet();
		}
		else {
			display_contact_sheet(ft_atoi(input));
		}
	}
}


void PhoneBook::display_contact(void) {

	int	i = 0;

	std::cout << "     INDEX| FIRSTNAME|  LASTNAME|  NICKNAME|" << std::endl;
	std::cout << "----------|----------|----------|----------|" << std::endl;
	while (i < nb_contact) {
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << resize(contact[i].getFirstName()) << "|"; 
		std::cout << std::setw(10) << resize(contact[i].getLastName()) << "|";
		std::cout << std::setw(10) << resize(contact[i].getNickname()) << "|" << std::endl;
		i++;
	}
	std::cout << "----------|----------|----------|----------|" << std::endl;
	get_contact_sheet();
}