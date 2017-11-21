// File: accumulator
// Created by Abigail Sturgeon on 11/21/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
#include "accum.h"
using namespace std;

// Constants, Structure, Classes

// Prototypes

// Main Program Program

int main()
{
    accum<int> integers(0);
    integers += 3;
    integers += 7;
    cout << integers.getTotal() << endl;
    accum<string> mystring("");
    mystring += "hello";
    mystring += " world";
    cout << mystring.getTotal() << endl;
    return 0;

}

// Function Definitions