// Exercise 1: Write a program that calculates the sum of the integers from 1 to n (n is
// entered by keyboard). First check with a do...while loop if the number n entered by the
// user is positive. Then use another while loop for the calculation.
#include <stdio.h>

int main(void) {
  int sum, n, counter = 0;
  printf("Enter A Positive Number\n");scanf("%i",&n);
  if( n < 0){
    printf("Your Number Is Not Positive\n");
    return 1;
    }
  // printf("N:%i\n",n);
  while( counter < n){
    counter = counter + 1;
    // printf("Counter:%i\n",counter);
    sum = sum + counter;
    // printf("Sum So Far: %i\n",sum);
    }
  printf("The Sum Of All The Values To %i Is %i\n",n,sum);
  return 0;
}
