#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
  cout.precision(11);
  cout << fixed;
  double piant = 0, pi, termo, dif;
  int i, indiceTermo;
  double soma = 0;
  indiceTermo = 1;
  for (i = 1; ; i+=2) {
    //cout << i << endl;;
    if (indiceTermo % 2 != 0) termo = 1./i;
    else termo = -1./i;
    
    soma += termo;
    
    pi = 4*soma;
    dif = fabs(pi - piant);
    cout << dif << endl;
    
    indiceTermo++;
    if (dif <= 0.005) break;
    piant = pi;
  }
  cout << endl <<"PI value for the required precision: "<< pi<<endl;
  return 0;
}
