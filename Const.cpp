// File: Const.cpp
// Created by Abigail Sturgeon on 11/14/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
#include "Person.h"

using namespace std;

// Constants, Structure, Classes

// Prototypes
int Double(const int& x);
// Main Program Program

int main()
{
    int i = 3;
    const int ci = 3;
    i = 4;
    // ci = 4;      Can't do because it's read only

    int j = 10;
    int dj = Double(j);
    int d10 = Double(10);
    //cout << dj << endl;
    //cout << d10 << endl;

    Person Waldo("Waldo", "Weber", 234);
    Waldo.setArNum(456);
    //cout << Waldo.getArNum() << endl;
    const Person cWaldo = Waldo;
    // cWaldo.setArNum(987);        // Can't do because it's a const object
    int wNum = cWaldo.getArNum();
    //cout << wNum << endl;

    int* pi = &i;
   // cout << &i << endl;
   // cout << pi << endl;

    // int *pci = &ci;      // Invalid because const int*  to int*
    const int *pci = &ci;       // Pointer to a const

    Person *pWaldo = &Waldo;
    Person Someone("Someone", "Else", 345);
    cout << Waldo.getName() << endl;
    cout << pWaldo->getName() << endl;      // Use arrow operator

    return 0;

}

// Function Definitions
int Double(const int& x)
{
    return x * 2;
}