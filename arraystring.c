#include<stdio.h>
#include<string.h>

int main()
{
   char names[3][10];
  
   for(int i = 0;i<3;i++)
   {
       printf("Enter %d names : ",i+1);
       gets(names[i]);
   }  
   //prints all the names 
   printf("This are all the names\n");
   for(int i = 0;i<3;i++)
   {
      puts(names[i]);
   }
}