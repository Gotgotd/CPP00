/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:45:26 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/05 11:38:17 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	to_upper(char c) {

	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

int	main(int ac, char **av) {

	int i;

	if (ac > 1) {
		for (i = 1; av[i]; i++) {
			for (int j = 0; av[i][j]; j++) {
				av[i][j] = to_upper(av[i][j]);
			}
			std::cout << av[i];
		}
		std::cout << std::endl;
	}
	else 
		std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
}