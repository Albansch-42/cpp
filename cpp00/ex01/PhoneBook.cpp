/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:01:32 by aschmitt          #+#    #+#             */
/*   Updated: 2024/08/12 13:40:54 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstring>

void    PhoneBook::start(void)
{
    std::cout << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "ADD       : To add a contact." << std::endl;
    std::cout << "SEARCH    : To search for a contact." << std::endl;
    std::cout << "EXIT      : to quit the PhoneBook." << std::endl;
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
    std::string s = "";

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
        std::cout <<  std::endl;
        std::cout << "enter the contact index: " << std::flush;
        std::getline(std::cin, s);
        if ((s.length() == 1 && s[0] >= '0' && s[0] <= '7') || std::cin.eof())
            break ;
        else
            std::cout << "Invalid input; please try again." << std::endl;
    }
    if (! std::cin.good())
    {
        std::cout << "\neof detected" << std::endl;
        return ;
    }
    this->_contacts[s[0] - '0'].Search();    
}