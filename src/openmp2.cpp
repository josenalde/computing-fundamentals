#include <iostream>
#include <omp.h>
#include <cstdlib>

using namespace std;

int main() {
omp_set_num_threads(4);
int n = 4;
int tid = -1;
#pragma omp paralell num_threads(n) private(tid)
    {
        tid = omp_get_thread_num();
        cout << "thread : " << tid << endl;
    }
    cout << "Thread bye " << tid << endl;
}
