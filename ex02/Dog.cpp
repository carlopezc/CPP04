/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:01:01 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/17 11:14:52 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    _type = "Dog";
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(std::string type)
{
    _type = type;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
{
    *this = other;
    std::cout << "Copy Dog constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

void  Dog::makeSound()
{
    std::cout << "Dog makes sound : Wof wof!" << std::endl;
}