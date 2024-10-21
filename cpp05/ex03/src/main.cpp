/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:04:11 by aschmitt          #+#    #+#             */
/*   Updated: 2024/10/21 13:58:58 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("Presidential pArdon", "Bender");
    if (rrf )
        std::cout << *rrf << std::endl<< std::endl;
    if (rrf )
        delete rrf;
    rrf = someRandomIntern.makeForm("sdqdqdq pArdon", "Jean");
    return (0);
}