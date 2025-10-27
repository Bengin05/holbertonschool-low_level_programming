#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 *
 * Description: For multiples of three, the word "Fizz" is printed instead
 * of the number, and for multiples of five, the word "Buzz" is printed.
 * For numbers that are multiples of both three and five, "FizzBuzz" is printed.
 * Each output is separated by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if ((i % 3 ==0) && (i % 5 == 0))
            printf("FizzBuzz");
        else if (i % 3 == 0)
            printf("Fizz");
        else if (i % 5 == 0)
            printf("Buzz");
        else
            printf("%d", i);
        
        if (i < 100)
            printf(" ");
    }
    printf("\n");

    return (0);
}
