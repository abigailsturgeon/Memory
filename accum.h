//
// Created by Owner on 11/21/2017.
//

#ifndef MEMORY_ACCUM_H
#define MEMORY_ACCUM_H

template <class T>
class accum
{
private:
    T total;
public:
    accum(T start):total(start){};
    T operator += (const T& t)
    {
        return total = total + t;
    }
    T getTotal()
    {
        return total;
    }
};


#endif //MEMORY_ACCUM_H
