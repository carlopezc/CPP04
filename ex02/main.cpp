/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:01:12 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/17 11:05:05 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main (void)
{
    Animal* Yes = new Dog();
    Animal* Tofu = new Cat();
    Yes->makeSound();
    Tofu->makeSound();
    delete Yes;
    delete Tofu;
}