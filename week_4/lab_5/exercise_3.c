// Exercise 3: Write a program that utilizes a loop (for or while) to print the following table
// of values:

#include <stdio.h>

int main(void){
  int limit = 10;
  printf("N\t10*N\t100*N\t1000*N\n");
  for(int i = 0; i < limit; i++) printf("%i\t%i\t\t%i\t\t%i\n",(i+1),(10*(i+1)),(100*(i+1)),(1000*(i+1)));
  return 0;
}
