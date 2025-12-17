/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:56:58 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/17 13:28:52 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter()
{
    int i;

    i = 0;
    this->_nombre = "default";
    while (i < 4)
        this->_materias[i++] = NULL;
    std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const& name)
{
    int i;

    i = 0;
    this->_nombre = name;
    while (i < 4)
        this->_materias[i++] = NULL;
    std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character& other)
{
    *this = other;
    std::cout << "Character copy constructor called" << std::endl;
}
Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        this->_nombre = other._nombre;
        int i = 0;
        while (i < 4)
        {
            if (this->_materias[i] != NULL)
                delete this->_materias[i];
            else    
                this->_materias[i] = NULL;
            i++;
        }
        i = 0;
        while (i < 4)
        {
            this->_materias[i] = other._materias[i].clone();
            i++;
        }
    }
    return (*this);
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
}

std::string const& Character::getName() const
{
    return (this->_nombre);
}
        
void equip(AMateria* m);
void unequip(int idx);
void use(int idx, ICharacter& target);