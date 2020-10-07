// By Prof. Josenalde Oliveira
#include <future> // wait for the thread to be finished and provides access to its outcome
#include <iostream>
#include <ctime>

using namespace std;

clock_t tStart = clock(); // global tStart
bool tOver = false;

#define TMAX 5.0f

bool countTime() {
    double tGame;
    do {
      clock_t t = clock()-tStart;
      tGame = (double)(t) / (double)CLOCKS_PER_SEC;
      //cout << "Remaining game time: " << TMAX-tGame << endl;
    } while (tGame < TMAX);
    tOver = true;
    return tOver;
}

int main() {
    future<bool> f(async(countTime)); // runs in background and toggles tOver after TMAX
    int x;
    while (!tOver) {
      cout << "Number: ";
      cin >> x; // wait for a keypress, but the time is passing and you may get a Time out after keypress
      cout << endl;
    }
    cout << "Time out " << endl;
}
