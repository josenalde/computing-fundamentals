#include <iostream>
#include <cstdlib> // for system
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    char command[] = "tasklist /fi \"MEMUSAGE ge ";
    strcat(command, argv[1]); // argv is string
    strcat(command, "\"");
    //cout << command;
    system("cls");
    system(command);
                                    
    return 0;
}
