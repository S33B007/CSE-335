/**
* @file Cow.h
 * @author Naseeb Bello
 *
 *Class that describes a Cow
 *
 *This class will describe a cow
 *
 */
 
#ifndef COW_H
#define COW_H

#include <string>
#include "Animal.h"

/**
 *Class that describes a Cow
 *
 *This class will describe a cow
 *
 */

/// cow is derived from Animal ||| Animal is a bass class or super class for cow and chicken
class Cow : public Animal {
private:
 /// The types of cow we can have on our farm
 enum class Type {Bull, BeefCow, MilkCow};
 /// ---- Properties of the class -----
 /// The cow's name
 std::string mName;

 /// The type of cow: Bull, BeefCow, or MilkCow
 Type mType =Type::MilkCow;

 /// The milk production for a cow in gallons per day
 double mMilkProduction = 0;
public:
 /// A method that we can use to input user information
 void ObtainCowInformation();
 /// A method to display information about this cow
 void DisplayAnimal();
 /// A method to verify the correct type of survivor
 bool CanSurviveTornado();

};



#endif //COW_H
