#include <iostream>
using namespace std;

struct Modes {
    int imediato;
    int *direto;
    int **indireto;
    int *relativo;
};

int main() {
    Modes t;
    int instData = 5;
    t.imediato = instData; cout << "End. Imediato: " 
                         << t.imediato << endl;
    t.direto = &instData; cout << "End. Direto: " 
                         << *t.direto << " em "
                         << t.direto << endl;
    t.indireto = &t.direto; cout << "End. Indireto: " 
                         << *t.indireto << " com o dado: " 
                         << *(*t.indireto) << endl;
    int v[4] = {1,5,30,2};
    int k=2;
    t.relativo = v;
    cout << "End. Relativo: " << *(t.relativo+k) << endl;
    return 0;
}