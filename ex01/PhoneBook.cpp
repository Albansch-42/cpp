/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:01:32 by aschmitt          #+#    #+#             */
/*   Updated: 2024/04/10 15:59:51 by aschmitt         ###   ########.fr       */
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

    for (int i = 0; i < 8; i++)
    {
        if (!this->_contacts[i].display().empty())
            std::cout << i << "= " << this->_contacts[i].display() <<  std::endl;
    }
}