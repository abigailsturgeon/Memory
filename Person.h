//
// Created by Owner on 11/14/2017.
//

#ifndef MEMORY_PERSON_H
#define MEMORY_PERSON_H
#include<iostream>
using namespace std;


class Person
{
private:
    string firstName;
    string lastName;
    int arNum;
public:
    Person(string fn, string ln, int a);
    ~Person();
    string getName() const;     // Return first and last name
    // Setter and getter for the arNum
    int getArNum() const;

    void setArNum(int arNum);

    // Operator overload for < and >
    bool operator <(Person &p) const;
    bool operator < (int n) const;
    friend bool operator < (int n, Person &p) const;

    // These should work with 1) int < person
    // 2) person < int, 3) int > person, 4) person > int
};
bool operator < (int i, Person &p) const;
#endif //MEMORY_PERSON_H
