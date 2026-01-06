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


void swap(int arr[])
{
    int temp = arr[0];
    //check an array and 
    for(int i=0;i<sizeof(arr);i++)
    {
          if(temp<arr[i+1])
          {
             arr[i] =arr[i+1];
          }
    }
}