/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:01:12 by carlotalcd        #+#    #+#             */
/*   Updated: 2026/01/13 15:11:01 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main (void)
{
    //Animal *perro = new Animal();
    Animal* Yes = new Dog();
    Animal* Tofu = new Cat();
    Yes->makeSound();
    Tofu->makeSound();
    delete Yes;
    delete Tofu;
}