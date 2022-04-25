/* Khanh Dong - U14837275 */
/* The program asks for the number of cities and number of drones, then asks for the drones' locations and travel distance, before calculates the cities that can be reached by the drones.*/

#include <stdio.h>

int main() {
   int city, drones;
   printf("Enter number of cities:\n");
   scanf("%d", &city);
   if (city < 1 || city > 100) {
      printf("Invalid number of cities %d\nMust be in the range [1,100]\n", city);
      return 0;
   }
   int cities[city];
  
   printf("Enter number of drones:\n");
   scanf("%d", &drones);
   if (drones < 1 || drones > 100) {
      printf("Invalid number of drones %d\nMust be in the range [1,100]\n",drones);
      return 0;
   }
 
   printf("Enter drone list: \n");
   int num_drone, pos, step, back_pos;
   
   for (num_drone = 0; num_drone < drones; num_drone++) {
       scanf("%d %d", &pos, &step);
       if (pos < 1 || pos > city || step < 1 || step > city) {
          printf("Invalid list of drones\nDrone location and travel distance must be in the range [1,%d]\n", city);
          return 0;
       }
       back_pos = pos;
       while (pos >= 1 && pos <= city) {
           cities[pos-1] = 1;
           pos += step;
       }
       while (back_pos >= 1 && back_pos <= city) {   
           cities[back_pos-1] = 1;
           back_pos -= step;
      }
   }

   int i;
   printf("Cities reached by a drone:\n");
   for (i = 0; i < city; i++) {
       if (cities[i] == 1) {
          printf("%d ",(i+1));
       }
   }
   printf("\n");
   return 0;
} 
