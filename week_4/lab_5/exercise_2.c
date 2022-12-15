// Exercise 2: Write a program that utilizes a for loop to print the numbers from 1 to 10
// side-by-side on the same line with three spaces between numbers.

#include <stdio.h>

int main(void){
  int limit = 10;
  for(int i =0; i < limit; i++){
    printf("%i   ",(i+1));
  }
  return 0;
}
