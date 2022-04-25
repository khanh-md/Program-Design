/* Khanh Dong - U14837275 */
/* The program ask for an array and return an array with the factorials of each element in the input array.  */

#include <stdio.h>

int fact(int n) {
   if (n <= 1) {
      return 1;
   }
   else {
      return n * fact(n-1);
   }
}

void calculate_fact(int a[], int n, int b[]) {
   int i;
   for (i = 0; i < n; i++) {
       b[i] = fact(a[i]);
   }
}

int main() {
   int length, i;
   printf("Enter the length of the array: \n");   
   scanf("%d", &length);
   int input[length];
   int output[length];
   
   int num;
   printf("Enter the elements of the array: \n");
   for (i = 0; i<length; i++) {
       scanf("%d", &num);
       input[i] = num;
   }
   
   calculate_fact(input, length, output);
   
   printf("Output: ");
   for (i = 0; i<length; i++) {
       printf("%d ", output[i]);       
   }
   printf("\n");
   return 0;
}

