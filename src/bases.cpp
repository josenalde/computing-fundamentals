#include <iostream>
using namespace std;
int main() {
    int x = 25;
    cout << x << endl;
    cout << hex << x << endl; //std::ios_base
    cout << oct << x << endl; // 15/8 = 1 resta 7, logo 17
    cout << dec << x << endl;
    return 0;
}