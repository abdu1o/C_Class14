#pragma once
#include "OrderProcessingException.h"

class Order 
{
private:
    int _id;

public:
    
    Order(int id)
    {
        this->_id = id;
    }

    void Process(int user_id) 
    {
        if (user_id == _id)
        {
            cout << "Order successfully processed!";
        }
        else
        {
            throw OrderProcessingException(404);
        }
    }
};