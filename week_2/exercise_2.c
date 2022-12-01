// Exercise 2: Write a program that requires the user to enter two integers, obtains the
// two numbers, and prints their sum, product, difference, quotient and remainder.
#include <stdio.h>

int main(void){
  int x, y, sum, product, difference, quotient, remainder;
  printf("This Programme Requires You To Enter Two Integers. It Will Then Return The: Sum, Product, Difference, Quotient And Remainder\n");
  printf("Enter The First Integer\n"); scanf("%i", &x);
  printf("Enter The Second Integer\n"); scanf("%i", &y);
  sum = x + y; product = x * y; difference = x - y; quotient = x / y; remainder = x%y;
  printf("The Sum Is: %i\nThe Product Is: %i\nThe Difference Is: %i\nThe Quotient Is: %d\nAnd The Remainder Is: %d\n",sum,product,difference,quotient,remainder);
  printf("\nQuot:%d",quotient);
  return 0;
  }
