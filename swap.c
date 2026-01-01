#include <stdio.h>
void swap(int a,int b,int x);
int main()
{
    int a = 1;
    int b = 2;
    int x;
    printf("Before the swap the values of a and b are %d and %d\n",a,b);
    x = a;
    a = b;
    b = x;
    printf("After the swap the values of a and b are %d and %d \n" , a,b);
}

void swap(int a,int b,int x)
{
   x = a;
   a = b;
   b = x;
}