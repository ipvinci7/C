#include <stdio.h>
#include <string.h>

int main()
{
     char name[] = "hello";
     int len = strlen(name);
     printf("The length of the array %d\n",len);
     char temp[len];
     int i;
     for(i = len +1 ;i>=0;i--)
     {
        printf("%c\n",name[i]);
             temp[i] = name[i];
        
     }
      temp[i] = '\0';
      printf("%s",temp); 
}


