//
// Created by Owner on 11/21/2017.
//

#include "bankAccount.h"
#include <iostream>

using namespace std;

bankAccount::bankAccount()
{
    cout << "Constructor Bank Account" << endl;
}
bankAccount::~bankAccount()
{
    cout << "Destructor Bank Account" << endl;
}

int bankAccount::getBalPennies() const
{
    return balPennies;
}

void bankAccount::setBalPennies(int balPennies)
{
    bankAccount::balPennies = balPennies;
}

bool bankAccount::operator<(const bankAccount &b)
{
    return balPennies < b.balPennies;
}
