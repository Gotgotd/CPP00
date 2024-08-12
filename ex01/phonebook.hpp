/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gautier <gautier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:34:49 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/12 15:39:52 by gautier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define GREEN "\033[32m" 
# define RED "\033[31m"
# define CYAN "\033[36m"
# define RESET "\033[0m"
# define MAGENTA "\033[35m"

# include <string>
# include <iostream>
# include <iomanip>
# include <cctype>
# include "contact.hpp"

class PhoneBook {

public:

	Contact contact[8];
	int		nb_contact;

	PhoneBook(void);
	~PhoneBook(void);

	void	display_contact(void);
	void	display_contact_sheet(int index);
	void	get_contact_sheet(void);
	void	add_contact(int i);
};

bool	is_digit(std::string str);

#endif