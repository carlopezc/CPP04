/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:34:57 by carlopez          #+#    #+#             */
/*   Updated: 2025/12/16 17:50:27 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default brain constructor called" << std::endl;
}
        
Brain::~Brain()
{
    std::cout << "Default brain destructor called" << std::endl;
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