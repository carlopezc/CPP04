/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:22:10 by carlopez          #+#    #+#             */
/*   Updated: 2026/01/13 14:44:33 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main (void)
{
    std::cout << "=== 1. CREANDO ARRAY DE ANIMALES ===" << std::endl;
    
    Animal* animals[4];

    int i = 0;
    while (i < 4)
    {
        if (i < 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        i++;
    }

    std::cout << "\n=== 2. PROBANDO SONIDOS ===" << std::endl;
    i = 0;
    while (i < 4)
    {
        animals[i]->makeSound();
        i++;
    }

    std::cout << "\n=== 3. BORRANDO ANIMALES (Check Destructors) ===" << std::endl;
    i = 0;
    while (i < 4)
    {
        delete animals[i];
        i++;
    }

    std::cout << "\n=== 4. PRUEBA DE DEEP COPY (Copia Profunda) ===" << std::endl;
    Dog* perroOriginal = new Dog();
    perroOriginal->setBrainIdea(0, "¡Quiero comida!");
    Dog* perroCopia = new Dog(*perroOriginal);
    
    std::cout << "   [Antes] Original: " << perroOriginal->getBrainIdea(0) << std::endl;
    std::cout << "   [Antes] Copia:    " << perroCopia->getBrainIdea(0) << std::endl;

    std::cout << "   --> Modificando el cerebro de la copia..." << std::endl;
    perroCopia->setBrainIdea(0, "¡Quiero dormir!");

    std::cout << "   [Despues] Original: " << perroOriginal->getBrainIdea(0) << std::endl;
    std::cout << "   [Despues] Copia:    " << perroCopia->getBrainIdea(0) << std::endl;
    
    std::cout << "\n--- Borrando copia ---" << std::endl;
    delete perroCopia; 
    std::cout << "--- Borrando original ---" << std::endl;
    delete perroOriginal;

    return 0;
}