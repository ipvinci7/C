#include <stdio.h>

int main()
{
    int num;
    printf("Enter number you want to find the factorial\n");
    scanf("%d", &num);
    
    int result = 1; // Start with 1, not num
    
    // For loop from num down to 1
    for(int i = num; i > 0; i--)
    {
        result = result * i;
    }
    
    printf("Factorial of %d is: %d\n", num, result);
    
    return 0;
}