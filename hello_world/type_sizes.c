/***************************************************************************************
 *                                                                                     *
 * A second C program for types and type sizes.                                        *
 *                                                                                     *
 * Some other new stuff...                                                             *
 *                                                                                     *
 ***************************************************************************************/

#include <stdio.h>

int main(){
  
  // char, short, int, long, float, double

  printf("%20s\t%2lu\n", "sizeof(char)", sizeof(char));     // lu = long-unsigned
  printf("%20s\t%2lu\n", "sizeof(unsigned char)", sizeof(unsigned char));
  printf("%20s\t%2lu\n", "sizeof(short)", sizeof(short));
  printf("%20s\t%2lu\n", "sizeof(unsigned short)", sizeof(unsigned short));
  printf("%20s\t%2lu\n", "sizeof(int)", sizeof(int));
  printf("%20s\t%2lu\n", "sizeof(unsigned int)", sizeof(unsigned int));
  printf("%20s\t%2lu\n", "sizeof(long)", sizeof(long));
  printf("%20s\t%2lu\n", "sizeof(unsigned long)", sizeof(unsigned long));
  printf("%20s\t%2lu\n", "sizeof(float)", sizeof(float));
  printf("%20s\t%2lu\n", "sizeof(double)", sizeof(double));

  // signed vs unsigned

}