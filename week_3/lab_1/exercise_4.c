// Exercise 4: Write a program that requires the user to enter two integers, obtains the
// two numbers, prints the largest one followed by the words "is the largest.". If the
// numbers are equal, print the message "These numbers are equal." Use if statements.

#include <stdio.h>

int main(){
  int x, y;
  printf("Enter Integer 1\n");
  scanf("%i",&x);
  printf("Enter Integer 2\n");
  scanf("%i",&y);
  if( x == y) printf("Your Inputted Integers (%i) Are Equal", x);
  if( x > y) printf("Your First Value (%i) Is Greater Than Your Second Value (%i)", x, y);
  if( x < y) printf("Your First Value (%i) Is Less Than Your Second Value (%i)", x, y);
  return 0;
}
