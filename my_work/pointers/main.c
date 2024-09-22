#include <stdio.h>

int main() {
  int a = 3;
  int* a_pointer = &a;

  printf(" a = %d\n", a);
  printf("address of a = %p\n\n", &a);

  printf(" a_pointer = %p\n", a_pointer);
  printf("address of a_pointer = %p\n\n", &a_pointer);

  printf("*a_pointer = %d\n", *a_pointer);
  printf("address of *a_pointer = %p\n\n", &a_pointer);

  return 0;
}