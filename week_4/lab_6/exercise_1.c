// Exercise 1: Write a program to nd the square of any number. This should be achieved
// by dening a dedicated function, e.g., double square(double num), to calculate
// the square, which is called in the main function. The initial number is given by the user.

#include <stdio.h>

int main(void){
  int n, square;
  printf("Enter A Number To Square\n");scanf("%i",&n);
  square = square_int(n);
  printf("%i Squared Is %i",n,square);
  return 0;
}
int square_int(number){
  int value;
  value = number*number;
  return value;
}
