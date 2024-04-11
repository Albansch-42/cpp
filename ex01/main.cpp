/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:04:11 by aschmitt          #+#    #+#             */
/*   Updated: 2024/04/11 12:24:58 by aschmitt         ###   ########.fr       */
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
        if (s.compare("ADD") == 0)
            Book.add();
        else if (s.compare("SEARCH") == 0) {
            Book.display();
        }
        std::cout << "> " << std::flush;
        // std::cin >> s;
        std::getline(std::cin, s);
    }
    return (0);
}