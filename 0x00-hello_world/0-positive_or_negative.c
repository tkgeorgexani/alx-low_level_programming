/*
 * File name: 0-postive_or_negative
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Complete the source code to print  wheher the number stored in the variable n is positive or negative
 * THE OUTPUT PROGRAM
 * IF the number is  greater than 0: is postive
 * IF the number is 0: is  Zero
 * IF the number is less than 0: is negative
 */
int main(void)
{
  int n;

  srand( time(0));
  n = rand() - RAND_MAX / 2;

  if ( n > 0)
    printf( "%d is postive\n", n);
  else if(n < 0)
    printf( "%d is negative\n", n);
  else
    printf( "%d is zero\n", n);

  return ( 0);

}