/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:07:40 by carlopez          #+#    #+#             */
/*   Updated: 2026/01/13 14:57:53 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

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