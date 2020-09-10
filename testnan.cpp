#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a = NAN;
    if (isnan(a)) cout << a << ": a is nan" << endl;
   
    float b = INFINITY;
    if (isinf(b)) cout << b <<  ": b is infinite" << endl;
   
    float c = 0; // also -0
    if (iszero(c)) cout << c <<  ": c is zero" << endl;
    
    //here isnan does not work
    if (isinf(5.0/0)) cout << " division error " << endl;

    bool testNaN = (a != a);
    if (testNaN) cout << "a is indeed NaN" << endl;
    
return 0;
}