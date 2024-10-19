/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:04:11 by aschmitt          #+#    #+#             */
/*   Updated: 2024/10/19 17:06:18 by aschmitt         ###   ########.fr       */
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

    Bureaucrat Jean("Jean", 50);
    std::cout << Jean << std::endl;
    
    std::cout << "----------------------------------------------" << std::endl;
    
    PresidentialPardonForm P;
    std::cout << P << std::endl;

    P.beSigned(Alban);
    try
    {
        P.execute(Alban);
    }
    catch(const std::exception& e)
    {
        std::cerr << '\n' << "EXCEPTION : " << e.what() << '\n'<< '\n';
    }
    
    std::cout << P << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
        
    return (0);
}