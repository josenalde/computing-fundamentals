#include <iostream>
#include <cmath>

int main() {
    double n = 11;
    int r = 1;
    std::cout.precision(18);
    while (r < 10) {
        std::cout << n << " * "<< n << " = " \
             << pow(n,2) << "\n";
        n = (n*10) + 1;
        r++; 
    }
    return 0;
}