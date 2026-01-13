/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:56:58 by carlotalcd        #+#    #+#             */
/*   Updated: 2026/01/13 16:18:42 by carlotalcd       ###   ########.fr       */
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
    int i;

    i = 0;
    while (i < 4)
    {
        this->_materias[i] = NULL;
        i++;
    }
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
            if (other._materias[i])
                this->_materias[i] = other._materias[i]->clone();
            else
                this->_materias[i] = NULL;
            i++;
        }
    }
    return (*this);
}

Character::~Character()
{
    int i;

    std::cout << "Character destructor called" << std::endl;
    i = 0;
    while (i < 4)
    {
        if (this->_materias[i] != NULL)
            delete this->_materias[i];
        i++;
    }
}

std::string const& Character::getName() const
{
    return (this->_nombre);
}
        
void Character::equip(AMateria* m)
{
    int i;

    i = 0;
    if (m == NULL)
        return ;
    while (i < 4)
    {
        if (this->_materias[i] == NULL)
        {
            this->_materias[i] = m;
            return ;
        }
        i++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
    {
        if (this->_materias[idx] != NULL)
            this->_materias[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3)
    {
        if (this->_materias[idx] != NULL)
            this->_materias[idx]->use(target);
    }
}