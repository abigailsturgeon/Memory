#include <iostream>

using namespace std;

int main()
{
    double sum;
    int size = 0;

    // 1) Capture input
    cout << "How many numbers do you want to store?";
    cin >> size;

    // 2) Allocate array of doubles based on input
    double *info = new double[size];

    // 3) Fill in the values
    for(int i = 0; i < size; i++)
    {
        cout << "Enter a double value: ";
        cin >> info[i];
    }

    // 4) Display values-- keep track of sum of them
    for(int i = 0; i < size; i++)
    {
        cout << i << " value : " << info[i] << endl;
        sum += info[i];
    }

    // 5) Display sum
    cout << "\nThe sum is " << sum << endl;

    // 6) Clean your mess
    delete[] info;


    return 0;

}