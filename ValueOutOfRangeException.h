#include <iostream>
#include <stdexcept>


class ValueOutOfRangeException:public runtime_error
{
    public:
        ValueOutOfRangeException(string msg):runtime_error("msg"){};
};
