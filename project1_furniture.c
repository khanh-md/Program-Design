/* Khanh Dong - U14837275 */
/* The program asks the user for the type of furniture and number of months rented, then calculate the total cost */

#include <stdio.h>

#define SOFA 60
#define LOVESEAT 45
#define POSTBED 55
#define DRESSER 28
#define TABLE 35

#define MAX_SOFA 450
#define MAX_LOVESEAT 280
#define MAX_POSTBED 350
#define MAX_DRESSER 200
#define MAX_TABLE 220

int main(void)
{
  int furniture, month, amount;
  /* Taking input */
  printf("Please select from the following menu: 1. Sofa, 2. Loveseat, 3. 4 Post Bed, 4. Dresser, 5. Kitchen Table\n");
  printf("Enter furniture selection: \n");
  scanf(" %d",&furniture);
  if (furniture < 1 || furniture > 5)
  {
    printf("Invalid input. The input should be in range of 1 to 5\n");
    return 0;
  }
  printf("Enter months rented: \n");
  scanf(" %d", &month);
  if (month < 1)
  {
    printf("Invalid input. Enter a positive number for months rented.\n");
    return 0;
  }

  /* Conditionals for different furnitures and invalid input */
  if (furniture == 1)
  {
    amount = SOFA + 45 * (month - 1);
    if (month >= 12)
    {
       amount = MAX_SOFA*(month / 12) + 45 * (month % 12);
    }
    else if (amount > MAX_SOFA)
    {
       amount = MAX_SOFA;
    }
    printf("Amount due($):%d\n ", amount);  
  } 
  else if (furniture == 2)
  {
    amount = LOVESEAT + 30 * (month - 1);
    if (month >= 12)
    {
       amount = MAX_LOVESEAT * (month/12) + 30 * (month % 12);
    }
    else if (amount > MAX_LOVESEAT)
    {
       amount = MAX_LOVESEAT;
    }   
    printf("Amount due($):%d\n ", amount);
  } 
  else if (furniture == 3)
  {
    amount = POSTBED + 38 * (month - 1);
    if (month >= 12)
    {
       amount = MAX_POSTBED * (month/12) + 38 * (month % 12);
    }
    else if (amount > MAX_POSTBED)
    {
       amount = MAX_POSTBED;
    }
    printf("Amount due($):%d\n ", amount);
  }  
  else if (furniture == 4)
  {
    amount = DRESSER + 25 * (month - 1);
    if (month >= 12)
    {
       amount = MAX_DRESSER * (month/12) + 25 * (month % 12);
    }
    else if (amount > MAX_DRESSER)
    {
       amount = MAX_DRESSER;
    }
    printf("Amount due($):%d\n ", amount);
  }  
  else if (furniture == 5)
  {
    amount = TABLE + 20 * (month - 1);
    if (month >= 12)
    {
       amount = MAX_TABLE * (month/12) + 20 * (month % 12);
    }
    else if (amount > MAX_TABLE)
    {
       amount = MAX_TABLE;
    }
    printf("Amount due($):%d\n ", amount); 
  }
  
  return 0;
}
