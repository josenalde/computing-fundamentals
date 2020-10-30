#include <iostream>
#include <cstdlib> // for system

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    system("tasklist /fi \"MEMUSAGE ge 200000\"");
                                    
    return 0;
}
