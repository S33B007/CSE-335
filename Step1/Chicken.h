/**
 * @file Chicken.h
 * @author Naseeb Bello
 *
 * Declaration of the Chicken class.
 *
 * This class describes a chicken
 */

#ifndef STEP1_CHICKEN_H
#define STEP1_CHICKEN_H
#include "Animal.h"

#include <string>

/** Class that describes a chicken.
*/
class Chicken: public Animal {
private:
    /// The chicken's ID
    std::string mId;

public:

    void ObtainChickenInformation();
    void DisplayAnimal();
    /// A method to verify the correct type of survivor
    bool CanSurviveTornado();

};


#endif //STEP1_CHICKEN_H