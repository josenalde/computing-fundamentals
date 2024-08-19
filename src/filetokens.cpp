#include <iostream>
#include <cstdlib> // file functions
#include <cstring> // strtok
//https://cplusplus.com/reference/cstring/strtok/
#include <exception>

using namespace std;
int main() { 
  FILE *fp;
  char line[100];
  int list_tokens[17];
  const char *sep = ";";

  int L=1;
  int i=0;
  int j=6;

  char *address_line;
  
  try {
    fp = fopen("numbers.txt", "r");
    while (!feof(fp)) {
      address_line = fgets(line, 100, fp);
      if (address_line) { // != NULL
        cout << "Line: " << L << "; Text: " << line;
        char *token = strtok(line, sep);
        while (token != NULL && i<j) {
          list_tokens[i++] = atoi(token);
          token = strtok(NULL, sep);
        }
        j += i;
      }
      L++;
    }
    i = 0;
    cout << "\ntokens after splitting...\n";
    cout << "[";
    for (; i < 17; i++) cout << " " << list_tokens[i];
    cout << "]";
  } catch(const exception &e) {
      cout << e.what();
  }   
  return 0;
}
