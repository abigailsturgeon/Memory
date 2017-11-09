// File: exception1.cpp
// Created by Abigail Sturgeon on 11/9/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>

using namespace std;

// Constants, Structure, Classes
const int MAX = 3;

class stack
{
private:
    int st[MAX];
    int top;
public:
    class range     // Exception class for stack
    {
        // Note: empty class
    };
    stack()     // Constructor
    {top = -1;}

    void push(int var)
    {
        if(top >= MAX -1)    // If stack is full
            throw range();  // Throw the exception
        st[++top] = var;    // Put number on stack

    }
    int pop()
    {
        if(top < 0)
            throw range();
        return st[top--];
    }
};

int main()
{
    stack s1;
    try
    {
        s1.push(11);
        s1.push(12);
        s1.push(13);
        s1.push(14);        // Stack is full
        cout << "1: " << s1.pop() << endl;
        cout << "2: " << s1.pop() << endl;
        cout << "3: " << s1.pop() << endl;
        cout << "4: " << s1.pop() << endl;
    }
    catch(stack::range)
    {
        cout << "Exception: stack full or empty" << endl;
    }
    cout << "Done" << endl;
    return 0;
}