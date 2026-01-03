#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number of numbers you want entered\n");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
         printf("Enter the %d number into the array",i);
         scanf("%d",&arr[i]);
        
    }
    //print all elements of array
    for(int i =0;i<num;i++)
    {
        printf("%d\n",arr[i]);
    }
}