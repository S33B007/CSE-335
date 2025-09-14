/**
 * @file Shark.cpp
 * @author Naseeb Bello
 */

#include <iostream>
#include "Shark.h"

using namespace std;

/**
 * Display information about this shark.
 */
void Shark::DisplayAnimal()
{
    //cout << mName << ": ";
    switch (mType)
    {
        case Type::GreatWhite:
            cout <<"Shark " << mName << " is a Great White" << endl;
        break;

        case Type::HammerHead:
            cout <<"Shark " << mName << " is a Hammer Head" << endl;
        break;

        case Type::Land:
            cout <<"Shark " << mName << " is a Land Shark" <<  endl;
        break;
        case Type::Nurse:
            cout <<"Shark " << mName << " is a Nurse Shark" <<  endl;
        break;
        case Type::Thresher:
            cout <<"Shark " << mName << " is a Thresher Shark" <<  endl;
        break;
    }
}

/**
 * Obtain information from the user about this shark.
 *
 * Asks the user for the information that describes a shark.
 */

void Shark::ObtainSharkInformation()
{
    cout << endl;
    cout << "Input information about the shark" << endl;

    // Obtain the name. This is easy, since it's just a
    // string.
    cout << "Name: ";
    cin >> mName;

    // Obtain the type using a menu. We have a loop so
    // we can handle errors.
    bool valid = false;
    while (!valid)
    {
        cout << "1: Great White" << endl;
        cout << "2: Hammer Head" << endl;
        cout << "3: Land" << endl;
        cout << "4: Nurse" << endl;
        cout << "5: Thresher" << endl;
        cout << "Enter selection and return: ";
        int option;
        cin >> option;
        if (!cin)
        {
            // We have an error. Clear the input and try again
            cin.clear();
            cin.ignore();
            continue;
        }

        switch (option)
        {
            case 1:
                mType = Type::GreatWhite;
            valid = true;
            break;

            case 2:
                mType = Type::HammerHead;
            valid = true;
            break;

            case 3:
                mType = Type::Land;
            valid = true;
            break;
            case 4:
                mType = Type::Nurse;
            valid = true;
            break;
            case 5:
                mType = Type::Thresher;
            valid = true;
            break;
        }



    }


}

/**
 * Obtain information on if shark can survive tornado.
 *
 * Verifies what types of sharks can survive the tornado.
 */
bool Shark::CanSurviveTornado()
{
    return (mType == Type::GreatWhite || mType == Type::HammerHead);
}
