// Exercise 3: Given three values a ≤ b ≤ c, which are the lengths of three segments, test if
// they can be the sides of a triangle using conditional statements. Insert the values from
// keyboard and print "It's a triangle" or "It's not a triangle". If so, dene the type of
// triangle: equilateral, isosceles, or scalene. Use if...else statments.

#include <stdio.h>
#include <math.h>

int main(){
  int x, y, z;
  printf("Enter The First Length\n"); scanf("%i",&x);
  printf("Enter The Second Length\n"); scanf("%i",&y);
  printf("Enter The Third Length\n"); scanf("%i",&z);

  if( x == y == z) printf("Your Triangle Is Equalateral With Lengths Size %i",x);
  if( x == y || y == z || x == z) printf("Your Triangle Is Isocele With Sides Length %i, %i, %i",x,y,z);
  if( x != y != z) printf("Your Triangle Is Scalene With Side Lengths %i, %i, %i ", x, y, z);
  return 0;
}
