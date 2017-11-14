//
// Created by Owner on 11/9/2017.
//

#ifndef MEMORY_DISTANCE_H
#define MEMORY_DISTANCE_H


class Distance
{
private:
    int feet;
    float inches;
public:
    class inchesEx{};       // Exception class
    Distance();
    Distance(int feet, float inches);
    void getDistance();
    void showDistance();
};


#endif //MEMORY_DISTANCE_H
