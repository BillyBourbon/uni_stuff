// Exercise 2: Write a program that calculates the sum of the following series:
// 1!/1+2!/2+3!/3+4!/4+5!/5. This should be achieved by dening a dedicated function, e.g.,
// int fact (int n), to calculate the factorial, which is called in the main function.

#include <stdio.h>


float factorial(int number){
  int value = 1;
  for(int x = 2; x <= number; x++){
    value = value * x;
  }
  value = value/number;
  return value;
}

int main(void){
  int n;
  float sum;
  printf("Enter A Number\n");scanf("%i",&n);
  for( int i = 1; i <= n; i ++){
    sum = sum + factorial(i);
  }
  printf("Sum Of The Series Is: %f",sum);
  return 0;
}
