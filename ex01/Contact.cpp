/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:06:31 by aschmitt          #+#    #+#             */
/*   Updated: 2024/04/10 15:59:54 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

std::string Contact::_getInput(std::string str) const
{
    std::string input = "";
    while (1)
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (!input.empty())
            break ;
        else
            std::cout << "Invalid input; please try again." << std::endl;
    }
    return (input);
}

void    Contact::startContact(void) {
    // std::cin.ignore();
    
    this->_firstName = this->_getInput("Please enter you first name: ");
    this->_lastName = this->_getInput("Please enter your last name: ");
    this->_nickname = this->_getInput("Please enter your nickname: ");
    this->_nickname = this->_getInput("Please enter your phone number: ");
    this->_nickname = this->_getInput("Please enter your darkest secret: ");
    std::cout << std::endl;
}

void    Contact::setindex(int i) {
    this->_index = i;
}

std::string    Contact::display() {
    return (this->_firstName);
}