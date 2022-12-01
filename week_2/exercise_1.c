//Exercise 1: Write a program that calculates the product of three integers. The program
#include <stdio.h>

int main(void){
  int x, y, z, result = 0;
  printf("This Programme Will Calculate The Product Of Three Integers That You Enter\n");
  printf("Please Enter The First Integer\n");
  scanf("%i",&x);
  printf("Please Enter The Second Integer\n");
  scanf("%i",&y);
  printf("Please Enter The Third Integer\n");
  scanf("%i",&z);
  result = x*y*z;
  printf("The Product Of The Integers Is: %i",result);
  return 0 ;
}
