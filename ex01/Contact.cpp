/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:06:31 by aschmitt          #+#    #+#             */
/*   Updated: 2024/04/11 12:19:31 by aschmitt         ###   ########.fr       */
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
    this->_phoneNumber = this->_getInput("Please enter your phone number: ");
    this->_darkestSecret = this->_getInput("Please enter your darkest secret: ");
    std::cout << std::endl;
}

void    Contact::setindex(int i) {
    this->_index = i;
}

std::string    Contact::GetName() {
    return (this->_firstName);
}

void printCell(const std::string content) {
    std::string truncated_content = "";
    if (content.length() > (10))
        truncated_content =  content.substr(0, 9) + '.';
    else
        truncated_content =  content;
    std::cout << std::right;
    std::cout.width(10);
    std::cout << truncated_content << "|";
}

void    Contact::Display(){
    std::cout << "|" ;
    printCell(this->_firstName);
    printCell(this->_lastName);
    printCell(this->_nickname);
    std::cout << std::endl;
}

void    Contact::Search(){
    if (this->_firstName.empty())
        return ;
    std::cout << std::endl;
    std::cout <<  "First name : " << this->_firstName << std::endl;
    std::cout <<  "Last name : " << this->_lastName << std::endl;
    std::cout <<  "Nickname : " << this->_nickname << std::endl;
    std::cout <<  "Phone number : " << this->_phoneNumber << std::endl;
    std::cout <<  "Darkest secret : " << this->_darkestSecret << std::endl;
}

