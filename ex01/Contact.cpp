/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:06:31 by aschmitt          #+#    #+#             */
/*   Updated: 2024/04/10 13:17:49 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

std::string Contact::_getInput(std::string str)
{
    
}

void    Contact::start(void) {
    // std::cin.ignore();
    
    
    this->_firstName = this->_getInput("Please enter you first name: ");
    this->_lastName = this->_getInput("Please enter your last name: ");
    this->_nickname = this->_getInput("Please enter your nickname: ");
    this->_nickname = this->_getInput("Please enter your phone number: ");
    this->_nickname = this->_getInput("Please enter your darkest secret: ");
    std::cout << std::endl;
}