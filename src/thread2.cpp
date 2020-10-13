#include <iostream>
#include <thread>
#include <exception>
#include <random>

using namespace std;

int x{0}, y{0}, z;

void doX () {
  default_random_engine dre(42*97);
  uniform_int_distribution<int> id(10,1000);
  for (int i =0; i<10; i++) {
    this_thread::sleep_for(chrono::milliseconds(id(dre)));
    x += i;
  }
}

void doY () {
  default_random_engine dre(42*90);
  uniform_int_distribution<int> id(10,1000);
  for (int i =0; i<5; i++) {
    this_thread::sleep_for(chrono::milliseconds(id(dre)));
    y += i;
  }
  y += x; // problem for shared resources
}

int main() {
  try {
    thread t1(doX);
    cout << "Primeiro plano calculando X: " << t1.get_id() << endl;
    thread t2(doY);
    cout << "Primeiro plano calculando Y após calcular X " << t2.get_id() << endl;
    t1.join();
    cout << "x = " << x << endl;
    t2.join();
    cout << "y = " << y << endl;
    z = x + y;
    cout << "z: " << z << endl;
  }
  catch (const exception& e) {
    cerr << "EXCEPTION: " << e.what() << endl;
  }
}
