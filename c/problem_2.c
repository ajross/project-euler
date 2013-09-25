#include "stdio.h"

int main(int argc, char** argv) {
   int sum = 0;

   int last_1 = 1;
   int last_2 = 1;
   int curr = 0;

   while (curr <= 4000000) {
       if (curr % 2 == 0) {
           sum += curr;
       }
       curr = last_1 + last_2;
       last_1 = last_2;
       last_2 = curr;
   }

   printf("The sum is: %d\n", sum);

   return 0;
}
