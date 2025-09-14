/**
 * @file Shark.h
 * @author Naseeb Bello
 *
 *Class that describes a Shark
 *
 *This class will describe a Shark
 *
 */
#include <string>
#include "Animal.h"

#ifndef SHARK_H
#define SHARK_H



class Shark: public Animal {
private:
    /// The types of shark we can have on our farm
    enum class Type {GreatWhite, HammerHead, Land, Nurse, Thresher};
    /// The shark's name
    std::string mName;

    /// The type of shark: GreatWhite, HammerHead, Land, Nurse, Thresher
    /// This sets the default type to great white
    Type mType =Type::GreatWhite;

public:
    /// A method that we can use to input user information
    void ObtainSharkInformation();
    /// A method to display information about this shark
    void DisplayAnimal();
    /// A method to verify the correct type of tornado survivor
    bool CanSurviveTornado();

};



#endif //SHARK_H
