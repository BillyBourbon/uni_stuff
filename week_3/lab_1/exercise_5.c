// Exercise 5: Write a program that reads an integer and determines and prints whether it
// is odd or even. Use if statements.

#include <stdio.h>

int main(){
  int x;
  printf("Enter An Integer\n");
  scanf("%i",&x);
  if( x % 2) printf("Your Value Is ODD");
  if( !(x % 2) ) printf("Your Value Is Even");
  return 0;
}
