/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:01:06 by carlotalcd        #+#    #+#             */
/*   Updated: 2026/01/13 15:16:51 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal 
{
    private:
        Brain* _brain;
        
    public:
        Dog();
        ~Dog();
        Dog(std::string type);
        Dog(const Dog& other);
        void setBrainIdea(int i, const std::string& idea);
        std::string getBrainIdea(int i) const;
        Dog& operator=(const Dog& other);
        void makeSound();
};

#endif