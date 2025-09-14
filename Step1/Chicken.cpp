/**
 * @file Chicken.cpp
 * @author Naseeb Bello
 */
 
#include <iostream>
#include "Chicken.h"

using namespace std;


/**
 * Obtain a chicken description from the user.
 */
void Chicken::ObtainChickenInformation()
{
    cout << endl;
    cout << "Input information about the chicken" << endl;

    // Obtain the ID. This is easy, since it's just a
    // string.
    cout << "Id: ";
    cin >> mId;
}

/**
 * Display the chicken.
 */
void Chicken::DisplayAnimal()
{
    cout << "Chicken: " << mId << endl;
}
/**
 * Obtain information on if Chicken can survive tornado.
 *
 * Verifies what types of Chicken can survive the tornado.
 */
bool Chicken::CanSurviveTornado()
{
    // chickens always revive
    return true;
}