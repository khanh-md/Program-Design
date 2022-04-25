/* Khanh Dong - U14837275 */
/* The user input a number up to 1000 digits and the program figures out if it is a multiple of 11 or not. */

#include <stdio.h>
#define STR_LEN 1000
int main(){
   char x[STR_LEN + 1];
   int ch, sum_odd=0, sum_even=0;
   printf("Enter the value of X: \n");
   scanf("%s", x);
   
   int i;
   for(i = 0; x[i] != '\0'; i++){
       ch = x[i] - '0';
       if (i%2)  sum_odd = sum_odd + ch;
       else sum_even = sum_even + ch;
   }
   
   int diff = sum_odd - sum_even;
   if (diff%11) printf("%s is not a multiple of 11\n", x);
   else printf("%s is a multiple of 11\n",x);
   
   return 0;
}
