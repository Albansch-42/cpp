/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:15:47 by aschmitt          #+#    #+#             */
/*   Updated: 2024/04/10 12:29:11 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac ; i++)
	{
		for (int j = 0; av[i][j]; j++)
			std::cout << (char) toupper(av[i][j]);
		if (i < ac - 1)
				std::cout << ' ';
	}
	std::cout << std::endl;
	return (1);
}
