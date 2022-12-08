// Exercise 3: Write a program that requires the user to enter a oat number and
// calculates a circumference using the given number as a radius. Declare the number Pi as
// a global constant outside the main function, like this: #define Pi 3.1415926.

#include <stdio.h>

#define Pi 3.1415926


int main(){
  float r, circumference;
  printf("Enter The Radius Of Your Circle \n");
  scanf("%f",&r);
  circumference = ( Pi * ( r * 2) );
  printf("The Circumference For Your circle Radius: %f Is %f",r,circumference);
  r
