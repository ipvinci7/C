#include <stdio.h>
#include <string.h>
int length(char word[]);
int main()
{
    int len;
     len = length("Oxford University Press");
     printf("%d\n",len);
    return 0;
}

int length(char word[])
{
     int i =0;
     while(word[i]!='\0')
     {
          i++;
     }
     return i;
}