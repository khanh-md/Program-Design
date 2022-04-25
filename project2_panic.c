/* Khanh Dong - U14837275 */
/* The program asks the user for the item cost, the amount of items bought and the amount of money
 * then determine whether the user has enough money and how much more they need. */

#include <stdio.h>

int main() {
  int price, units, money, cost = 0;
  /* Ask for inputs */
  printf("Enter item price: \n");
  scanf("%d", &price);
  if (price <= 0) {
     printf("Invalid price %d\n", price);
     printf("Price must be greater than 0\n");
     return 0;
  }
  printf("Enter number of units: \n");
  scanf("%d", &units);
  if (units <= 0) {
     printf("Invalid number of units %d\n", units);
     printf("Number of units must be greater than 0\n");
     return 0;
  }
  printf("Enter money amount: \n");
  scanf("%d", &money);
  if (money < 0) {
     printf("Invalid money amount %d\n", money);
     printf("Money amount must be greater than or equal to 0\n");
     return 0;
  }
  /* Loop to calculate the cost */
  int i, extra;
  for (i = 1; i<= units; i++) {
     cost = cost + i * price;
  } 
  if (cost > money) {
     extra = cost - money;
     printf("Needs %d dollar(s) to complete the purchase!\n", extra);
  }
  else {
     printf("Has enough money!\n");
  }
  return 0;
}  
