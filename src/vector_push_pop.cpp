#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v {1,2,3,4,5}; // v = {...} optional
  v.push_back(6); //insert after last element
  // (back, last inserted) 5 4 3 2 1 (front, first inserted)
  // similar to queue (FILA ptbr)
  for (unsigned char i=0; i < v.size(); i++) {
    cout << (int)i << ": " << v[i] << endl;
  }
  //now 6 is at the end
  v.pop_back(); // remove the last inserted element from the end
  cout << endl;
  for (unsigned char i=0; i < v.size(); i++) {
    cout << (int)i << ": " << v[i] << endl;
  }

}
