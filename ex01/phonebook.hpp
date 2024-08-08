/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:34:49 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/08 18:24:19 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <cctype>
# include "contact.hpp"

class PhoneBook {

public:

	Contact contact[8];

	PhoneBook(void);
	~PhoneBook(void);

	void	display_contact(void);
	void	add_contact(int i);
};

#endif