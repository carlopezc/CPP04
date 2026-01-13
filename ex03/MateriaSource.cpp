/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:07:47 by carlotalcd        #+#    #+#             */
/*   Updated: 2026/01/13 15:34:57 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    int i;

    i = 0;
    std::cout << "MateriaSource default constructor called" << std::endl;
    while (i < 4)
    {
        this->_materias[i] = NULL;
        i++;
    }
    
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
   *this = other;
    std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        int i = 0;
        while (i < 4)
        {
            if (this->_materias[i] != NULL)
                delete this->_materias[i];
            this->_materias[i] = NULL;
            i++;
        }
        i = 0;
        while (i < 4)
        {
            if (other._materias[i] != NULL)
                this->_materias[i] = other._materias[i]->clone();
            else
                this->_materias[i] = NULL;
            i++;
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    int i = 0;
    while (i < 4)
    {
        if (_materias[i] != NULL)
            delete _materias[i];
        i++;
    }
    std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;
    
    if (m == NULL)
        return; 
    while (i < 4)
    {
        if (_materias[i] == NULL)
        {
            _materias[i] = m;
            return ;
        }
        i++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;

    while (i < 4)
    {
        if (_materias[i] != NULL && _materias[i]->getType() == type)
            return (_materias[i]->clone());
        i++;
    }
    return (0);
}