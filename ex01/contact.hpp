/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:29:09 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/08 18:28:54 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {

private: 

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

public:

	Contact(void);
	~Contact(void);

	void		setFirstName(std::string input);
	std::string	getFirstName(void) const;

	void		setLastName(std::string input);
	std::string	getLastName(void) const;

	void		setNickname(std::string input);
	std::string	getNickname(void) const;

	void		setPhoneNumber(std::string input);
	std::string	getPhoneNumber(void) const;

	void		setDarkestSecret(std::string input);
	std::string	getDarkestSecret(void) const;


};

#endif