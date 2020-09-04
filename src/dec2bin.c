#include <stdio.h>

typedef unsigned int uint; 
void decToBin(uint numDec) { 
	const uint wordCpu = 16;
	int digit[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int i = 0, j;
	while (numDec >= 2) {
		digit[i] = numDec % 2; 
		numDec = numDec / 2; 
		i++;
	}
	digit[i] = 1; 
	// last quocient 
	for (j = wordCpu-1; j >= 0; j--) 
		printf("%d", digit[j]);
	//printf("\xDC\xDB\xDB\xDB\xDB");
}

int main() {
	decToBin(100);
	return 0;
}
