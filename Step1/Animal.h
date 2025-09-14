/**
 * @file Animal.h
 * @author Naseeb Bello
 *
 *Class that describes an Animal
 *
 *This class will describe an animal
 *
 */
 
#ifndef ANIMAL_H
#define ANIMAL_H



class Animal {
private:

public:
    virtual ~Animal();
    /** Display an animal. */
    virtual void DisplayAnimal() {}
    /**Utilize obtain animal information to assist in count for ans**/
    virtual bool CanSurviveTornado()
    {
        return false;
    }

};



#endif //ANIMAL_H
