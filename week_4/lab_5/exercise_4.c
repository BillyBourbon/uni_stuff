// Exercise 4: Write a program to input a number and check whether the number is prime
// number or not using for loop.

#include <stdio.h>

int main(void){
  int n;
  
  printf("Enter A Number\n");scanf("%i",&n);
  if(n < 0){
    printf("Your Value Is Negative");
    return 0;
    }  
  for(int i = 1; i <= n; i++){
    if(n%i == 0 && i != 1 && i != n){
      printf("Your Value Of %i Is Not Prime",n);
      return 0;
    }
  }
  printf("Your Value %i Is Prime",n);
  return 0;
}
