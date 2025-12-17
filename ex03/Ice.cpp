/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:07:58 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/17 12:47:12 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
    _type = "ice";
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& other)
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = other;
}

Ice& Ice::operator=(const Ice& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

Ice* Ice::clone() const
{
    Ice* ice = new Ice(*this);
    return (ice);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}