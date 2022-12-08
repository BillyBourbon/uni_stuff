// Exercise 2: Write a program that requires the user to enter two oat numbers and
// calculates their average.
#include <stdio.h>

int main(){
  float x,y,avg;
  printf("Enter The First Float Value\n");
  scanf("%f",&x);
  printf("Enter The Second Float Value\n");
  scanf("%f",&y);
  avg = ( x + y)/2;
  printf("Average Value Of %f And %f Is %f",x,y,avg);
  return 0;
}
