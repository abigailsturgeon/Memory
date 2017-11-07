//
// Created by Owner on 11/7/2017.
//

#include <cstring>
#include <iostream>
using namespace std;
#include "myString.h"

myString :: myString(char *s)
{
    int length = strlen(s);       // Length of input string

    // Get memory
    new char [length + 1];
    strcpy(str, s);     // Copy argument to new allocated space and save address to str
}

myString::~myString()
{
    cout << "Deleting memory" << endl;
    delete[] str;
}

void myString::display()
{
    cout << str << endl;
}

/*!
 * Update string: This will allocate new memory,
 * change my pointer to the new space, and
 * delete old memory
 * @param newStr: New string to update
 */
void myString::updateString(char *newStr)
{
    int lengt = strlen(newStr);

    // Allocate new memory
    char *temp = new char [lengt + 1];

    strcpy(temp, newStr);

    // Delete old string
    cout << "Deleting old memory" << endl;
    delete [] str;

    // Point to new allocated space
    str = temp;
}

