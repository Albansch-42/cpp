/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:01:32 by aschmitt          #+#    #+#             */
/*   Updated: 2024/04/11 12:22:50 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::start(void)
{
    std::cout << std::endl;
    std::cout << "📞 Welcome to Your Awesome PhoneBook 📖" << std::endl;
    std::cout << std::endl;
    std::cout << "--------------USAGE---------------" << std::endl;
    std::cout << "ADD\t: To add a contact." << std::endl;
    std::cout << "SEARCH\t: To search for a contact." << std::endl;
    std::cout << "EXIT\t: to quite the PhoneBook." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << std::endl;
}

void    PhoneBook::add(void)
{
    static  int i;

    this->_contacts[i % 8].startContact();
    this->_contacts[i % 8].setindex(i % 8);
    i++;
}

void    PhoneBook::display(void)
{
    int input = -1;

    std::cout << "|     index|first name| last name|  nickname|"<<  std::endl;
    for (int i = 0; i < 8; i++)
    {
        if (!this->_contacts[i].GetName().empty())
        {
            std::cout << "|         " << i;
            this->_contacts[i].Display();
        }
    }
    while (1)
    {
        std::cout << "enter the contact index: " << std::flush;
        std::cin >> input;
        if (input >= 0 && input <= 7)
            break ;
        else
            std::cout << "Invalid input; please try again." << std::endl;
    }
    this->_contacts[input].Search();    
}