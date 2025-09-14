/**
 * @file Farm.h
 * @author Naseeb Bello
 *
 *Class that describes a Farm
 *
 *This class holds a collection of animals that make
 *up the inventory of a farm
 *
 */

#include "Cow.h"
#include <vector>

#ifndef FARM_H
#define FARM_H

/**
 * Class that describes a farm.
 *
 * Holds a collection of animals that make up the farm
 * inventory.
 */

class Farm {

private:
 /// A list with the inventory of all animals on the farm
 std::vector<Animal *> mInventory;
public:
 ~Farm();

 void AddAnimal(Animal *animal);
 /// a method to display the farm inventoru
 void DisplayInventory();

 void DisplayTornadoSurvivors();

};



#endif //STEP1_FARM_H
