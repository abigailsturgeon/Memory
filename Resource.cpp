//
// Created by Owner on 11/14/2017.
//

#include "Resource.h"

Resource::Resource(string n)
{
    name = n;
    cout << "Constructing name " << name << endl;
}

Resource::~Resource()
{
    cout << "Destructing " << name << endl;
}
