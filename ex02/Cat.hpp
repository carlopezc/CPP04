/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:00:56 by carlotalcd        #+#    #+#             */
/*   Updated: 2026/01/13 15:16:45 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal 
{
    private:
        Brain *_brain;
        
    public:
        Cat();
        ~Cat();
        Cat(std::string type);
        Cat(const Cat& other);
        void setBrainIdea(int i, const std::string& idea);
        std::string getBrainIdea(int i) const;
        Cat& operator=(const Cat& other);
        void makeSound();
};

#endif