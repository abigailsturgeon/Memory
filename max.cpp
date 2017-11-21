// File: max
// Created by Abigail Sturgeon on 11/21/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include "Person.h"
#include "bankAccount.h"

using namespace std;

// Constants, Structure, Classes
template <class T>
T max(T &t1, T &t2)
{
    return t1 < t2 ? t2 : t1;       // If t1 < t2 is true then t2, if not t1
                                    // Shortcut if else statement
};
// Prototypes

// Main Program Program

int main()
{
    cout << "Max of 33 and 44 is " << max(33, 44) << endl;

    string s1 = "Hello";
    string s2 = "World";
    cout << "The max of " << s1 << " and " << s2 << " is " << max(s1, s2) << endl;

    Person p1("Waldo", "Weber", 123);
    Person p2("Charlie", "Brown", 456);
    cout << "The max of " << p1.getName() << " and " << p2.getName() << " is " << max(p1, p2).getName();

    bankAccount b1;
    b1.setBalPennies(55);
    bankAccount b2;
    b2.setBalPennies(11);
    cout << "The max of " << b1.getBalPennies() << " and " << b2.getBalPennies() << " is " << max(b1, b2).getBalPennies();
    return 0;

}

// Function Definitions