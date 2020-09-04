#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool y;
    cin >> a;
    cin >> b;
    cin >> c;
    y = (((a < b) && (b > c)) || (a>b)); // se usar and e or fora de condicional dá erro
    if (y) cout << "y=V " << a << " " << b << " " << c << endl;
    else cout << "y=F" << endl;
    return 0;
}