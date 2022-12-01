#include <stdio.h>
#include <time.h>
int main(void){  
  char name[50];
  int year_of_birth;
  time_t s;
  struct tm* current;
  s = time(NULL);
  current = localtime(&s);
  printf("This Programme Will Ask You To Enter Your Name Then Greet You By It. After This It Will Ask Your Year Of Birth To Calculate Your Age");
  printf("\nEnter Your Name\n");scanf("%s",name);
  printf("Hello %s Hope Your Having A Good Day",name);
  printf("\nEnter Your Year Of Birth\n");scanf("%i",&year_of_birth);
  printf("\nYour Age Is: %i",((current->tm_year +1900)-year_of_birth));
  return 0;
  }
