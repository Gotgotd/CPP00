/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:00:08 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/08 18:32:30 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

//constructor
Contact::Contact(void) {}

//destructor
Contact::~Contact(void) {}

//GETTERS
std::string	Contact::getFirstName(void) const {
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const {
	return (this->_lastName);
}

std::string	Contact::getNickname(void) const {
		return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void) const {
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const {
	return (this->_phoneNumber);
}


//SETTERS
void	Contact::setFirstName(std::string input) {
	this->_firstName = input;
}

void	Contact::setLastName(std::string input) {
	this->_lastName = input;
}

void	Contact::setNickname(std::string input) {
	this->_nickname = input;
}

void	Contact::setPhoneNumber(std::string input) {
	this->_phoneNumber = input;
}

void	Contact::setDarkestSecret(std::string input) {
	this->_darkestSecret = input;
}