#include <stdio.h>
#include <stdlib.h>

int main() {
    int hostA = 0b11000000101010000000000000000010;
    int hostB = 0b11000000101010000000000000110111;
    int hostC = 0b11000000101010000000000100110111;
    int maskA  = 0b11111111111111111111111100000000;
    int maskB = maskA;
    int maskC = maskA;
    int netA = hostA ^ maskA;
    int netB = hostB ^ maskB;
    int netC = hostC ^ maskC;
    if (netA == netB) printf("hostA e hostB na mesma rede");
    if (netA == netC) printf("hostA e hostC na mesma rede");
    else printf("hostA e hostC em redes diferentes");
system("pause");
return 0;
}
