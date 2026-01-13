/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:00:51 by carlotalcd        #+#    #+#             */
/*   Updated: 2026/01/13 15:14:41 by carlotalcd       ###   ########.fr       */
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

void Cat::setBrainIdea(int i, const std::string& idea)
{
    if (i >= 0 && i < 100 && idea != "")
        this->_brain->setIdea(i, idea);
    else if (idea == "")
        std::cout << "Please write a correct idea" << std::endl;
    else
        std::cout << "Please write a valid index" << std::endl;
}

std::string Cat::getBrainIdea(int i) const
{
    if (i >= 0 && i < 100)
        return (this->_brain->getIdea(i));
    else
    {
        std::cout << "Please write a valid index" << std::endl;
        return ("");
    }
}