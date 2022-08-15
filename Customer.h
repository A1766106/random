#ifndef CUSTOMER_H
#define CUSTOMER_H // if customer is defined this is this file

#include <string>

class Customer
{
    public:
        int ID;
        int Cart_Sum;
        std::string Name;
        Customer();
        void hello();
        

};

#endif