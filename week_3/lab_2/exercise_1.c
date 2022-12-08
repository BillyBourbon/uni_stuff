// Exercise 1: Given an input temperature and its scale (Celsius or Fahrenheit), convert the
// corresponding temperature to the other scale by using if...else statements.

#include <stdio.h>
#include <string.h>

int main(){
  float temperature, conversion;
  char unit;
  printf("Enter A Temperature (As Float)\n");
  scanf("%f",&temperature);
  printf("Enter Select A Unit Of Temperature. C For Celcius OR F For Farenheit\n");
  scanf("%s",&unit);
  
  if( strcmp(&unit, "F") == 0 || strcmp(&unit, "f") == 0) {
    conversion = (( temperature - 32 ) * 5)/9;
    printf("%f (Farenheit) Is Equal To %f (Celcius)",temperature, conversion);
    }
  
  if( strcmp(&unit, "C") == 0 || strcmp(&unit, "c") == 0) {
    conversion = ( temperature * 1.8 ) + 32;
    printf("%f (Celcius) Is Equal To %f (Farenheit)",temperature, conversion);
    
    }
  return 0;
}
