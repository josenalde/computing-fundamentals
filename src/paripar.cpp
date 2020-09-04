#include <iostream>
#include <bitset> // std::bitset
using namespace std;

int main() {
   bitset<9> d = 0b00001101;
   //gerar bit de paridade
   //supondo possível contar 1's
   //método count() retorna número de 1s
   //método set() marca bit com 1 ou 0 na posição
   //método size() retorna o tamanho do dado
   if (d.count() % 2 == 0) d.set(d.size()-1,0);
   else d.set(d.size()-1,1);
   cout << d << endl;

   //agora, como é gerado eletronicamente

   bool bp;
   bp = (((((((d[0]^d[1])^d[2])^d[3])^d[4])^d[5])^d[6])^d[7]); 
   d.set(d.size()-1,bp);
   cout << d << endl;
   return 0;
}