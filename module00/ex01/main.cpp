/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:04:11 by aschmitt          #+#    #+#             */
/*   Updated: 2024/08/12 13:30:56 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook Book;
    std::string s = "";
    Book.start();
    while (s.compare("EXIT"))
    {
        if (std::cin.eof())
        {
            std::cout << "\neof detected" << std::endl;
            break ;
        }
        if (s.compare("ADD") == 0)
            Book.add();
        else if (s.compare("SEARCH") == 0) {
            Book.display();
        }
        if (! std::cin.good())
            break ;
        std::cout << "> " << std::flush;
        std::getline(std::cin, s);
    }
    return (0);
}