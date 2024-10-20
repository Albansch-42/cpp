/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:04:11 by aschmitt          #+#    #+#             */
/*   Updated: 2024/10/21 01:28:13 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat Alban("Alban", 1);
    std::cout << Alban << std::endl;

    Bureaucrat Jean("Jean", 150);
    std::cout << Jean << std::endl;
    
    std::cout << "----------------------------------------------" << std::endl;
    
    ShrubberyCreationForm P;
    std::cout << P << std::endl;

    std::cout << "----------------------------------------------" << std::endl;

    Jean.signForm(P);
    Jean.executeForm(P);
    
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << P << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
        
    return (0);
}