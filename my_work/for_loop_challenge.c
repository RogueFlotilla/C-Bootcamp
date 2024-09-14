#include <stdio.h>

int main(){
  float f = 0;

  for (int i = 0; i < 256; i++){
    printf("%4d --> %4x\n'\n", i, i);
  }
}