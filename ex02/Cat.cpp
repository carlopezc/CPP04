/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:00:51 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/17 11:14:07 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    _type = "Cat";
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(std::string type)
{
    _type = type;
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
    *this = other;
    std::cout << "Copy Cat constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

void  Cat::makeSound()
{
    std::cout << "Cat makes sound : Miau miau!" << std::endl;
}