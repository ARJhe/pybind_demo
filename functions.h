#include <iostream>  
  
using namespace std;  

char const * greet()  
{  
    return "Welcome to pybind11 !";  
}

  
class Functions  
{  
    public:  
        Functions();  
        double add(double, double);  
};  
  
Functions::Functions(void)  
{  
    cout << "object created !" << endl;  
}  
  
double Functions::add(double in1, double in2)  
{  
    return in1 + in2;  
}
