#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    int a = 0b00000010;
    char aString[9];
    //guardar o número a em texto "binário"
    int d{1}; // int d = 1
    //d=1;
    cout << (10 >> 1) << endl;
     // a >> 1, a / 2^1
    cout << (10 >> 4) << endl;
    // 10 >> 4 // a >> 4, a / 2^4 = a / 16
    int b;
    while (d < 8) { // enquanto
        b = a << d; // >> divide por 2
        itoa(b, aString, 2); 
        //converte
        cout << "DEC: \t"
        << b
        << " BIN: "
        << aString << endl;
        d+=2; // INCREMENTA d (controle)
        // para sair do laço
    } // aqui fora o d = 8
    return 0;
}