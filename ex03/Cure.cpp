/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:31:53 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/17 12:46:33 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
    _type = "cure";
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& other)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = other;
}

Cure& Cure::operator=(const Cure& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

Cure* Cure::clone() const
{
    Cure* cure = new Cure(*this);
    return (cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}