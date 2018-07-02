/*
    Program : Calculate Distance of Sound travel for gases
*/

#include <iostream>
using namespace std;


int main()
{

    int medium;
    int duration;
    int speed;

    cout << "   1. Carbon Dioxide " << endl;
    cout << "   2. Helium "         << endl;
    cout << "   3. Hydrogen "       << endl;

    cout << endl;
    cout << "Choose the medium type by entering a number as shown above: " ;
    cin >> medium;

    cout << endl << endl;

   //    Note: Using if-else is also applicable
    switch (medium)
    {
           case 1: speed = 258;
                   break;

           case 2: speed = 972;
                   break;

           case 3: speed = 1270;
                   break;

           default: speed = 0;
    }

    if (speed > 0)
    {
       cout << "Enter the travel duration: ";
       cin >> duration;
       cout << endl;

       if ( (duration >0) && (duration <=30) )
       {
            int distance = speed * duration;
            cout << "RESULT:  The sound has travelled " << distance << "  meters" << endl;
       }
       else
       {
            cout << "ERROR: The duration is out of range. Program ends." << endl;
       }
    }
    else
    {
        cout << "ERROR: The medium type is invalid. Program ends." << endl;
    }

    system ("PAUSE");
    return 0;
}
