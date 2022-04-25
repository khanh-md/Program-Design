/* Khanh Dong - U14837275 */
/* The program ask for number of parts and types the company has, then determine how many computers it can build. */

#include <stdio.h>

int find_minimum(int *a, int n);
int main(){
   int parts, types;
   printf("Enter number of parts (N):\n");
   scanf("%d", &parts);
   if (parts < 1 || parts > 1000000){
       printf("Invalid number of parts %d\nMust be in the range [1,1000000]\n", parts);
       return 0;
   }

   printf("Enter number of part types(K):\n");
   scanf("%d", &types);
   if (types < 1 || types > 10000){
      printf("Invalid number of part types %d\nMust be in the range [1,10000]\n", types);
      return 0;
   }

   int type_list[types], i, part_num;
   for (i=0; i<types; i++){
       type_list[i] = 0;
   }

   printf("Enter part list:\n");
   for (i = 0; i < parts; i++){
       scanf("%d", &part_num);
       if (part_num < 1 || part_num > types){
          printf("Invalid list of parts\nPart codes must be in the range [1,%d]\n", types);
          return 0;
       }
       type_list[part_num-1]++;
   }

   int min;
   min = find_minimum(type_list, types);
  
   printf("The factory can build %d computer(s).\n", min);
   return 0;
}

int find_minimum(int *a, int n){
   int *p;
   for (p = a+1; p < a+n; p++){
       if (*p < *a) *a = *p;
       else continue;
   }
   int min = *a;
   return min;
}

