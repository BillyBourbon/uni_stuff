/*Print the sum of two given numbers*/ 
#include <stdio.h>
int main()
{
    int a, b; 
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    a=a+b; 
    printf("Result: %d\n", a);    
    return 0;
}