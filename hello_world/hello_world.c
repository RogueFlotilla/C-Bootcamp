/*************************************************************************************************
 *                                                                                               *
 * Project: hello_world.c                                                                        *
 *                                                                                               *
 * Everyone's first C program.                                                                   *
 *                                                                                               *
 *************************************************************************************************/

// That ^ was a block comment (/* ... */)
// And this single line comment

#include <stdio.h>

int main(){
  printf("Hello, World!\n"); // print using printf
  printf("%s\n","Hello, World!"); // format specifier [or] print conversions
  printf("%s, %s\n","Hello", "World!"); // format specifier [or] print conversions
  puts("Hello, World!"); // print using puts
  printf("%10d\n", 8675309); // make the number 10 characters
  printf("%-10d\n", 8675309); // left allign the number; still 10 char
  printf("%-10f\n", 8675309.7029); // print decimals (float)
  printf("%-10.3f\n", 8675309.7029); // print only 3 decimals (float)
  printf("%d\t%d\t%d\t%f", 1, 2, 3, 4.0); // print a table
  return 0;
}