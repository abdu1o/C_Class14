#pragma once
class OrderProcessingException : public exception 
{
private:
    int _errorCode; 

public:
    OrderProcessingException(int errorCode)
    {
        this->_errorCode = errorCode;
    }
   
    int GetErrorCode() const 
    { 
        return _errorCode;
    }
};