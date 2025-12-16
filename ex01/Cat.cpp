/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:51:30 by carlopez          #+#    #+#             */
/*   Updated: 2025/12/16 18:12:48 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    _brain = new Brain();
    _type = "Cat";
    std::cout << "Default cat constructor called" << std::endl;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(std::string type)
{
    _brain = new Brain();
    _type = type;
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
    this->_type = other._type;
    this->_brain = new Brain(*other._brain);
    std::cout << "Copy Cat constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        this->_type = other._type;
        if (this->_brain != NULL)
            delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    return (*this);
}

void  Cat::makeSound()
{
    std::cout << "Cat makes sound : Miau miau!" << std::endl;
}