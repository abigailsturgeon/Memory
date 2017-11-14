//
// Created by Owner on 11/14/2017.
//

#include "Person.h"
#include<iostream>
using namespace std;

Person::Person(string fn, string ln, int a)
{
    firstName = fn;
    lastName = ln;
    arNum = a;
}

Person::~Person()
{

}

string Person::getName() const
{
    return firstName + " " + lastName;
}

int Person::getArNum() const
{
    return arNum;
}

void Person::setArNum(int arNum)
{
    Person::arNum = arNum;
}
/*!
 * Compare person < person
 * @param p: reference to person
 * @return: true or false
 */
bool Person::operator<(Person &p) const
{
    return arNum < p.arNum;
}
/*!
 * Compare Person < int
 * @param n: integer number
 * @return: true or false
 */
bool Person::operator<(int n) const
{
    return arNum < n;
}
/*!
 * Compare int < Person
 * @param n: integer number
 * @param p: reference to person
 * @return: true or false
 */
bool operator<(int n, Person &p) const
{
    return n < p.arNum;
}
