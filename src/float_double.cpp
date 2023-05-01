#include <iostream>
#include <cmath>

float fdelta(float a, float b, float c) {
  return b*b - 4*a*c;
}

double ddelta(double a, double b, double c) {
  return b*b - 4*a*c;
}

float fxpos(float a, float b, float delta) {
  return (-b + sqrt(delta));
}

double dxpos(double a, double b, double delta) {
  return (-b + sqrt(delta));
}

float fxneg(float a, float b, float delta) {
  return (-b - sqrt(delta));
}

double dxneg(double a, double b, double delta) {
  return (-b - sqrt(delta));
}

float fxnegmod(float a, float b, float c, float delta) {
  return (2*c) / (-b+sqrt(delta));
}

double dxnegmod(double a, double b, double c, double delta) {
  return (2*c) / (-b+sqrt(delta));
}

using namespace std;
int main() {
  float af = 1, bf=-100.0001, cf=0.01;
  double ad = 1, bd=-100.0001, cd=0.01;
  cout << fixed;
  cout.precision(8);
  std::cout << fdelta(af,bf,cf) << std::endl;
  std::cout << ddelta(ad,bd,cd) << std::endl;
  std::cout << fxpos(af,bf,fdelta(af,bf,cf)) << std::endl;
  std::cout << dxpos(ad,bd,ddelta(ad,bd,cd)) << std::endl;
  std::cout << fxneg(af,bf,fdelta(af,bf,cf)) << std::endl;
  std::cout << dxneg(ad,bd,ddelta(ad,bd,cd)) << std::endl;
  std::cout << fxnegmod(af,bf,cf,fdelta(af,bf,cf)) << std::endl;
  std::cout << dxnegmod(ad,bd,cd, ddelta(ad,bd,cd)) << std::endl;
  //diferença nos deltas e no numerador de x_
  
}