#include <iostream>
using namespace std;

int main() {
    int hostA = 0b11000000001010100000000000000010; //192.42.0.2
    int hostB = 0b11000000101010000000000100110111; //192.168.1.55
    int hostC = 0b11000000101010000000000100110110; //192.168.1.54
    int maskA  = 0b11111111111111111111111100000000; //255.255.255.0
    int maskB = maskA;
    int maskC = maskA;
    int netA = hostA ^ maskA;
    int netB = hostB ^ maskB;
    int netC = hostC ^ maskC;
    netA = netA >> 8; //compares only 24 bits (network)
    netB = netB >> 8;
    netC = netC >> 8;
    if (netA == netB) cout << "hostA and hostB at same net" << endl;
    else cout << "hostA and hostB at different nets" << endl;
    
    if (netB == netC) cout << "hostB and hostC at same net" << endl;
    else cout << "hostB and hostC at different nets" << endl;
    
    if (netA == netC) cout << "hostA and hostC at same net" << endl;
    else cout << "hostA and hostC at different nets" << endl;

return 0;
}
