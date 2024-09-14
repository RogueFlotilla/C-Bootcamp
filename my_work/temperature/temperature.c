/***************************************************************************************
 *                                                                                     *
 * A fourth C program for temperature conversion.                                      *
 *                                                                                     *
 * Some other new stuff...                                                             *
 *                                                                                     *
 ***************************************************************************************/

#include <stdio.h>

int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 10;

  fahr = lower;
  while (fahr <= upper)
  {
    celsius = 5 * ((fahr - 32) / 9);
    printf("%.2f\t%.2f\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}