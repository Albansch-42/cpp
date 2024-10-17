/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:04:11 by aschmitt          #+#    #+#             */
/*   Updated: 2024/10/17 19:39:11 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "----------------------------------------------" << std::endl;
    
    Form form("Form numero 27", 50, 50);
    std::cout << form << std::endl;
    
    std::cout << "----------------------------------------------" << std::endl;

    Bureaucrat Alban("Alban", 51);
    std::cout << Alban << std::endl;

    Bureaucrat Jean("Jean", 49);
    std::cout << Jean << std::endl;
    
    std::cout << "----------------------------------------------" << std::endl;

    Alban.signForm(form);
    
    std::cout << "----------------------------------------------" << std::endl;
    
    std::cout << form << std::endl;
    
    std::cout << "----------------------------------------------" << std::endl;
    
    Jean.signForm(form);

    std::cout << "----------------------------------------------" << std::endl;
    
    std::cout << form << std::endl;
    
    std::cout << "----------------------------------------------" << std::endl;
        
    return (0);
}