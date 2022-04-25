/* Khanh Dong - U14837275 */
/* The program asks user for a year after 1986, then output the the year comet Halley will come next. */

#include <stdio.h>

#define INTERVAL 76

int main(void)
{
  int year, appearance, next_app=0;
  printf("Enter year: \n");
  scanf("%d", &year);
  
  appearance = (year - 1986)/INTERVAL;

  if (year <= 1986)
  {
    printf("Invalid year %d.\n", year);
    printf("Input year must be greater than 1986.\n");
  }
  else if (appearance >= 0)
  {
    next_app = 1986 + INTERVAL * (appearance+1);
    printf("Next appearance: %d\n", next_app);
  }
  return 0; 
}
