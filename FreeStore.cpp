// File: FreeStore.cpp
// Created by Abigail Sturgeon on 11/14/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
#include "Resource.h"

using namespace std;

int main()
{
    {       // Brackets to create a source with local resource lives
        // Only valid between the brackets
        Resource localResource("Local");
        string localString = localResource.getName();
    }
    Resource *pResource = new Resource("Create with new");
    string newString = pResource->getName();
    cout << newString << endl;

    int j = 3;
    if(j == 2)
    {
        delete pResource;
        return 1;
    }
    // Clean
    Resource *p2 = pResource;       // Pointer resource to a pointer resource
    string s3 = p2->getName();
    delete pResource;
    string s4 = pResource->getName();
    cout << "s4" << s4 << endl; // SHOULD NOT BE THERE ILLEGAL
    // ALREADY DELETED
    pResource = nullptr;
    delete pResource;       // Crashes your system, delete twice
    delete p2;
    cout << "Done" << endl;
    return 0;
}