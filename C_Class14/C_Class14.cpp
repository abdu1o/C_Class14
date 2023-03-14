#include <iostream>
#include <exception>
using namespace std;

#include "Order.h"
#include "OrderProcessingException.h"


int main()
{
    Order order(123);
    try 
    {
        order.Process(234);
    }
    catch (const OrderProcessingException& ex) 
    {
        cerr << "Error with code: " << ex.GetErrorCode() << endl;
    }

    try
    {
        order.Process(123);
    }
    catch (const OrderProcessingException& ex)
    {
        cerr << "Error with code: " << ex.GetErrorCode() << endl;
    }
}
