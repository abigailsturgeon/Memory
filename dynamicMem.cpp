#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char *str = "Waldo is the best mascot in Utah";
    int len = strlen(str);

    char *ptr;       // Makes a pointer to char
    ptr = new char[len + 1];     // Set aside memory: string + null or '\0'

    strcpy(ptr, str);
    cout << "Original: " << str << endl;
    cout << "Copy: " << ptr << endl;

    delete[] ptr;       // Release ptr's memory-- square brackets for array, not needed for objects

    return 0;
}