#include <ctime>
#include <cstdio>

int main () {
   clock_t start_t, end_t;
   long long int bigI = 100000000LL; // 64 bits
   printf("size of lli: %d", sizeof(long long int));
   int i;
   start_t = clock();
   printf("Starting of the program, start_t = %ld\n", start_t);
    
   printf("Going to scan a big loop, start_t = %ld\n", start_t);
   for(i=0; i< bigI; i++) {
   	  //printf("%d;",i);
   }
   end_t = clock();
   printf("End of the big loop, end_t = %ld\n", end_t);
   double total_t = (double)(end_t - start_t) / (double)CLOCKS_PER_SEC;
   printf("Total time taken by CPU: %.10f\n", total_t );
   printf("Exiting of the program...\n");

   return(0);
}
