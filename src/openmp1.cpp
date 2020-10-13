#include <iostream>
//#include <thread>
#include <omp.h>
#include <random>
#include <ctime>

using namespace std;

void fillVectorParalell(int n, vector<double> &a, vector<double> &b) {
  int i;
    #pragma omp paralell for
        for (i=1; i < n; i++) {
            b.push_back((a[i] + a[i-1]) / 2.0);
            //cout << b[i-1] << endl;
        }
}

void fillVectorNonP(int n, vector<double> &a, vector<double> &b) {
    int j;
    //#pragma omp paralell for
        for (j=1; j < n; j++) {
            b.push_back((a[j] + a[j-1]) / 2.0);
            //cout << b[i-1] << endl;
        }
}

int main() {
  clock_t startT, endT;
  default_random_engine dre; //default engine generator
  uniform_real_distribution<double> dr(10,30);
  int n = 1000000;
  vector<double> v1, v2;
  for (int i=0;i<n;i++) {
      v1.push_back(dr(dre));
      //v2.push_back(dr(dre));
      //cout << v1[i] << " , " << v2[i] << endl;
  }
  startT = clock();
  fillVectorParalell(n,v1,v2);
  endT = clock();
  double totalT1 = (double)(endT-startT)/(double)CLOCKS_PER_SEC; // clock ticks
  startT = clock();
  fillVectorNonP(n, v1, v2);
  endT = clock();
  double totalT2 = (double)(endT-startT)/(double)CLOCKS_PER_SEC; // clock ticks
  cout.precision(16);
  cout << std::fixed << "Execution time Paralell: " << totalT1 << endl;
  cout << std::fixed << "Execution time Non Paralell: " << totalT2 << endl;

//   for (int i = 0; i < v2.size(); i++) {
//       cout << v2[i] << endl;
//   }
}
