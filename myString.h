//
// Created by Owner on 11/7/2017.
//

#ifndef MEMORY_MYSTRING_H
#define MEMORY_MYSTRING_H

class myString
{
private:
    char *str;
public:
    myString(char *s);      // Constructor, one argument
    ~myString();        // Destructor

    void display();     // Display string
    void updateString(char *newStr);
};


#endif //MEMORY_MYSTRING_H
