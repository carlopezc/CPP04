/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:07:34 by carlotalcd        #+#    #+#             */
/*   Updated: 2026/01/13 15:35:29 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& other)
{
    this->_type = other._type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}