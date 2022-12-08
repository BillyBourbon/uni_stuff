// Exercise 2: Given an input temperature and its scale (Celsius or Fahrenheit), convert the
// corresponding temperature to the other scale by using switch...case statements.

#include <stdio.h>

int main(){
  float temperature, conversion;
  char unit;
  printf("Enter A Temperature (As Float)\n");
  scanf("%f",&temperature);
  printf("Enter Select A Unit Of Temperature. C For Celcius OR F For Farenheit\n");
  scanf("%s",&unit);

  switch(unit){
    case 'C' : conversion = ( temperature * 1.8 ) + 32; break;
    case 'c' : conversion = ( temperature * 1.8 ) + 32; break;
    case 'F' : conversion = (( temperature - 32 ) * 5)/9; break;
    case 'f' : conversion = (( temperature - 32 ) * 5)/9; break;
    default : conversion = 0; break;
  }
  if( conversion != 0 ) {
    printf("Your Temperature Value Converted Is: %f",conversion);
    } else{
    printf("Your Selected Unit Of Temperature Wasnt C or F (Was %s)",&unit);
    }
  
  return 0;
}
