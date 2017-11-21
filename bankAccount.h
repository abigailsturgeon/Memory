//
// Created by Owner on 11/21/2017.
//

#ifndef MEMORY_BANKACCOUNT_H
#define MEMORY_BANKACCOUNT_H


class bankAccount
{
private:
    int balPennies;
public:
    bankAccount();
    ~bankAccount();

    int getBalPennies() const;

    void setBalPennies(int balPennies);

    bool operator < (const bankAccount &b);

};


#endif //MEMORY_BANKACCOUNT_H
