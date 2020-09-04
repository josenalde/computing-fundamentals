#include <iostream>
#include <cctype>
using namespace std;
int main() {
    int a = 255;
    int b = 0x1f; // número 1F em HEXADECIMAL (0x)
    int c = 0b0111; // número 0111 em BINÁRIO (0b)
    int d = 017; // número 17 em OCTAL (0)
    char n[8];
    int N;
    itoa(a, n, 2);
    cout << hex << b << endl;
    cout << dec << b << endl;
    cout << dec << c << endl;
    cout << dec << d << endl;
    cout << oct << d << endl;
    cout << n << endl;
    if (isdigit(n[0])) N = atoi(n);
    cout << N << endl;
    return 0;
}