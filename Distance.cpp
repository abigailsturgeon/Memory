//
// Created by Owner on 11/9/2017.
//

#include "Distance.h"
#include<iostream>
using namespace std;

/*!
 * Constructor with no arguments
 */
Distance::Distance()
{
    feet = 0;
    inches = 0.0;
}
/*!
 * Constructor with 2 arguments
 * @param feet
 * @param inches
 */
Distance::Distance(int feet, float inches)
{
    Distance:: feet = feet;
    Distance:: inches = inches;

    /*
     * Or
     * distance::distance (int f, float i)
     * {
     *     feet = f;
     *     inches = i;
     * }
     */
}
/*!
 * Get distance from user
 */
void Distance::getDistance()
{
    cout << "\nEnter feet: ";
    cin >> feet;
    cout << "\nEnter inches: ";
    cin >> inches;
    if(inches >= 12.0)      // Too big for inches
    {
        throw inchesEx();
    }
}
/*!
 * Display feet and inches
 */
void Distance::showDistance()
{
    cout << feet << "\'-" << inches << "\"";
}
