/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:58:58 by carlotalcd        #+#    #+#             */
/*   Updated: 2026/01/12 15:59:01 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    // 1. Crear la Fuente de Materia (La fábrica)
    IMateriaSource* src = new MateriaSource();
    
    // 2. Enseñar a la fábrica las recetas
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    // 3. Crear al personaje "me"
    ICharacter* me = new Character("me");
    
    // 4. Crear materias desde la fábrica y equiparlas
    AMateria* tmp;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    
    tmp = src->createMateria("cure");
    me->equip(tmp);

    // 5. Crear otro personaje (target)
    ICharacter* bob = new Character("bob");

    // 6. Usar las habilidades
    me->use(0, *bob);
    me->use(1, *bob);

    // 7. Limpieza de memoria
    delete bob;
    delete me;
    delete src;

    return 0;
}