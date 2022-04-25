/* Khanh Dong - U14837275 */
/* The program asks user for input, then determine if it is in alphabetic order or not */

#include <stdio.h>
#include <ctype.h>

int main() {
   char letter = 'a', lower = 'a';
   int previous, order = 1;

   printf("Input: \n");
   while (letter != '\n') {
     previous = lower;
     letter = getchar();
     lower = tolower(letter);
     if (isalpha(letter) == 0 && letter != '\n'){
        order = 0;
     }
     else if (previous > lower && lower != '\n') {
        order = 0;
     }
   }

   if (order==1) {
     printf("Output: In order\n");
   }
   else {
     printf("Output: Not in order\n");
   }
   return 0;
}
