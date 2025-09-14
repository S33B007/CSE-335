/**
 * @file Farm.cpp
 * @author Naseeb Bello
 */
 
#include "../step1/Farm.h"

#include <iostream>
/**
 * Farm destructor
 */
Farm::~Farm()
{
    // Iterate over all the animals, destroying
    // each one.
    for (auto animal : mInventory)
    {
        delete animal;
    }

    // And clear the list
    mInventory.clear();
}

/** Add an animal to the farm inventory.
 *
 * @param cow A cow to add to the inventory
 */
void Farm::AddAnimal(Animal *animal)
{
    mInventory.push_back(animal);
}
/**
 * Display the farm inventory.
 */
void Farm::DisplayInventory()
{
    for (auto animal : mInventory)
    {
        /// animal is a pointer to the cow object so we use -> to access the member function
        animal->DisplayAnimal();
    }

}

void Farm::DisplayTornadoSurvivors()
{
    int count = 0;
    for (auto animal : mInventory)
    {
        if (animal->CanSurviveTornado())
        {
            count ++;
        }
    }
    std::cout <<"There are " << count << " animals that could survive a tornado" << std::endl;

}
