#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls"); // windows; linux = system("clear")
    int a = 0b00001010; // 10
    int b = 0b00000101; // 5
    int s = a & b;
    cout << s << endl;
    cout << (a | b) << endl;
        
    return 0;
}