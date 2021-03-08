#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>

using namespace std;

int main() {
  vector<int> t = {1,2,3,4,5,6,7,8,9};
  vector<int> g = {1,2,3,4,5,6,7,8,9};
  pair<int,int> c;
  unsigned num = chrono::system_clock::now().time_since_epoch().count();
  for (int i = 0; i < t.size(); i++) {
    shuffle(t.begin(), t.end(), default_random_engine(num));
    shuffle(g.begin(), g.end(), default_random_engine(num+10)); // a different seed
  }
  for (int i = 0; i < t.size(); i++) {
    c = make_pair(g[i], t[i]); // (group, subject)
    cout << "(" << c.first << "," << c.second << ")" << endl;
  }

}
