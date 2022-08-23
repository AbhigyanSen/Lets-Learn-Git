#include <stdio.h>
int main() 
{    
    int a, b, diff;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    diff = a + b;      
    
    printf("Difference of %d and %d is %d", a, b, diff);
    return 0;
}