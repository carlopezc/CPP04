/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:34:57 by carlopez          #+#    #+#             */
/*   Updated: 2026/01/13 15:01:02 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default brain constructor called" << std::endl;
}
        
Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
        
Brain::Brain(const Brain& other)
{
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    int     i;

    i = 0;
    if (this != &other)
    {
        while (i < 100)
        {
            this->_ideas[i] = other._ideas[i];
            i++;
        }
    }
    return (*this);
}

std::string Brain::getIdea(int i) const
{
    if (i >= 0 && i < 100)
        return (this->_ideas[i]);
    return ("");
}

void Brain::setIdea(int i, const std::string& idea)
{
    if (i >= 0 && i < 100)
        this->_ideas[i] = idea;
}