// File: memory.cpp
// Created by Abigail Sturgeon on 11/16/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    Person Waldo("Waldo", "Weber", 123);
    Waldo.AddResource();
    Waldo.setFirstName("Waldo Jr.");
    Waldo.AddResource();

    Person WaldoSr = Waldo;

    Waldo = WaldoSr;
    return 0;
}

// Function Definitions