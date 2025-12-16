/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:22:10 by carlopez          #+#    #+#             */
/*   Updated: 2025/12/16 18:17:07 by carlopez         ###   ########.fr       */
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

    for (int i = 0; i < 4 / 2; i++)
    {
        animals[i] = new Dog();
    }
    for (int i = 4 / 2; i < 4; i++)
    {
        animals[i] = new Cat();
    }

    // --- PRUEBA 2: Sonidos (Opcional, para ver que son perros y gatos) ---
    std::cout << "\n=== 2. PROBANDO SONIDOS ===" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        animals[i]->makeSound();
    }

    // --- PRUEBA 3: Borrado y detección de Leaks ---
    std::cout << "\n=== 3. BORRANDO ANIMALES (Check Destructors) ===" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }

    // --- PRUEBA 4: Prueba específica de Copia Profunda ---
    std::cout << "\n=== 4. PRUEBA DE DEEP COPY (Copia Profunda) ===" << std::endl;
    
    Dog* perroOriginal = new Dog();
    
    // Si la copia es superficial, al borrar perroCopia se borraría el cerebro de perroOriginal
    // y al borrar perroOriginal daría error (double free).
    // Si la copia es profunda, ambos tienen cerebros distintos y no pasa nada.
    
    Dog* perroCopia = new Dog(*perroOriginal); // Usamos constructor de copia
    
    std::cout << "--- Borrando copia ---" << std::endl;
    delete perroCopia; 
    
    std::cout << "--- Borrando original ---" << std::endl;
    delete perroOriginal;

    return 0;
}