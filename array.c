#include <stdio.h>
int traverse(int arr[],int size);
int insert(int arr[],int pos,int num);
int search(int arr[],int num,int size);
int main()
{
  int size;
  printf("Enter the size of the array \n");
  scanf("%d",&size);
  int arr[size];
  
  printf("Enter the elements of the array\n");

  for(int i =0;i<size;i++)
  {
       scanf("%d",&arr[i]);
  }
     printf("This are the elements of the array\n");
//    for(int i=0;i<size;i++)
//    {
//       printf("%d\n",arr[i]);
//    }
 traverse(arr,size);
 insert(arr,1,99);
 printf("This is the elements of the array after \n");
 traverse(arr,size);
 int num;
 printf("Enter a number you want to search for\n");
 scanf("%d\n",&num);
 search(arr,num,size);
}


//traverse
int traverse(int arr[],int size)
{
   for(int i=0;i<size;i++)
   {
      printf("%d\n",arr[i]);
   }
  return 0;
}

int insert(int arr[],int pos,int num)
{
    arr[pos] = num;
}
//search an array
//this should look for an element an return the position
int search(int arr[],int num,int size)
{
    int pos;
    for(int i=0;i<size;i++)
    {
         if(arr[i]==num)
         {
              printf("The position of the element is %d",i);
              pos = i;
              return pos;
         }
    }
    //return pos;
}