/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:51:53 by carlopez          #+#    #+#             */
/*   Updated: 2026/01/13 14:57:46 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    _brain = new Brain();
    _type = "Dog";
    std::cout << "Default dog constructor called" << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(std::string type)
{
    _brain = new Brain();
    _type = type;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    this->_type = other._type;
    this->_brain = new Brain(*other._brain);
    std::cout << "Copy Dog constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
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

void  Dog::makeSound()
{
    std::cout << "Dog makes sound : Wof wof!" << std::endl;
}

void Dog::setBrainIdea(int i, const std::string& idea)
{
    if (i >= 0 && i < 100 && idea != "")
        this->_brain->setIdea(i, idea);
    else if (idea == "")
        std::cout << "Please write a correct idea" << std::endl;
    else
        std::cout << "Please write a valid index" << std::endl;
}

std::string Dog::getBrainIdea(int i) const
{
    if (i >= 0 && i < 100)
        return (this->_brain->getIdea(i));
    else
    {
        std::cout << "Please write a valid index" << std::endl;
        return ("");
    }
}