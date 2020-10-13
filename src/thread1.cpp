#include <iostream>
#include <thread>
#include <exception>
#include <random>

using namespace std;

void doTask (int num, char c) {
  default_random_engine dre(42*c);
  uniform_int_distribution<int> id(10,1000);
  //cout << "Executado por thread " << this_thread::get_id() << endl;
  for (int i =0; i<num; i++) {
    this_thread::sleep_for(chrono::milliseconds(id(dre)));
    cout.put(c).flush();
  }
}
int main() {
  try {
    thread t1(doTask, 5, '.');
    cout << "Thread iniciada em primeiro plano " << t1.get_id() << endl;
    // imprime outros caracteres em outras threads em segundo plano
    for (int i=0; i < 5; i++) {
      thread t(doTask,10,'a'+ i);
      cout << "Thread iniciada em segundo plano " << t.get_id() << endl;
      t.detach(); // executa em segundo plano
    }
    
    cin.get(); //aguarda enter ou qualquer entrada
    cout << " Join na thread de primeiro plano: " << t1.get_id() << endl;
    t1.join();
  }
  
  catch (const exception& e) {
    cerr << "EXCEPTION: " << e.what() << endl;
  }
}
