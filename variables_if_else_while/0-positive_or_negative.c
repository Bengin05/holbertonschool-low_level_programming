#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int x;

    srand(time(0));
    x = rand() - RAND_MAX / 2;

    printf("%d\n",x);

      if (x > 0)
      {
           printf("The number is positive \n");
      }
      else if (x < 0)
      {
           printf("The number is negative \n");
      }
      else
      {
           printf("The number is zero \n");
       }
      return 0;
}