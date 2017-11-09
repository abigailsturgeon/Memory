// File: strClass.cpp
// Created by Abigail Sturgeon on 11/7/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
#include "myString.h"

using namespace std;

int main()
{
    myString s1 = "Who knows nothing doubts nothing";

    cout << "S1 = "; s1.display();

    s1.updateString("Now this is what I call music");
    cout << "Now s1 = "; s1.display();

    return 0;
}