#include <stdio.h>

#define ARRAY_SIZE 5

int main(){
  
  int grades[ARRAY_SIZE] = {98, 79, 82, 95, 93}; //Creating array of five grades
  int c = 0; //counter
  
  //For Statement
  printf("\nPRINTED USING FOR STATEMENT:\n");
  for(int i = 0; i < 5; i++) {
    printf("GRADE %2d:  ", i+1);
    printf("%2d  \n", grades[i]);
  }

  //While Statement
  printf("\nPRINTED USING WHILE STATEMENT:\n");
  while(c < 5){
    grades[c] += 2; //everyone gets two additional points (graded on curve)
    printf("GRADE %2d:  ", c+1);
    printf("%2d  \n", grades[c]);
    c++;
  }

  //While statement; increment after evaluating while condition before running body statements
  int t = 0;
  printf("\n");
  while(t++ < 5){
    printf("%4d", t);
    // getchar(); //acts as a pause for debugging
  }

  printf("\n");

  //Do statement
  int d = 0;
  do {
    printf("%4d", grades[d]);
    d++;
  } while(d < 5);

  return 0;

}