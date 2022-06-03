/*
* File: 0-positive_or_negative.
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints a random number and states whether
*        it is positive, negative, or zero.
* IF n > 0: is Postive
* IF n == 0: is zero
* IF n < 0: is negative
*
* Return: Always 0.
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);

return (0);
}
