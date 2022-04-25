/* Khanh Dong - U14837275 */
/* The program take in an array and determine whether it is all odd or even, or neither. */

#include <stdio.h>

void find_parity(int *a, int n, int *all_even, int *all_odd);
int main() {
   int i, length;
   printf("Enter the length of the input array:\n");
   scanf("%d", &length);
   int a[length];
   printf("Enter the array elements:\n");
   for (i = 0; i < length; i++) {
     scanf("%d", &a[i]);
   }
   int all_even[length], all_odd[length];
   find_parity(a, length, all_even, all_odd); 
   
   int e, odd = 1, even = 1;
   for (e = 0; e < length; e++){
      if (all_even[e] == a[e]) continue;
      else even = 0;
   }
   for (e = 0; e < length; e++){
      if (all_odd[e] == a[e]) continue;
      else odd = 0;
   }
   
   if (even) printf("Output: good, all elements are even\n");
   else if(odd) printf("Output: good, all elements are odd\n");
   else printf("Output: not good\n");
   
   return 0;
}

void find_parity(int *a, int n, int *all_even, int *all_odd){
   int *p, *i, *q;
   i = all_even;
   q = all_odd;
   for (p = a; p< a+n; p++) {
       if (*p%2){
           *q = *p;
           q++;
       }
       else{
           *i = *p;
           i++;
       }
   }
}
