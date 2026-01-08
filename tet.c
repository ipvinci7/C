#include <stdio.h>

int main()
{
      int i =0;
      int ch;
      ch= getchar();
      char str[100];
     while(ch!='*')
     {
          str[i] =ch;
          i++;
          ch=getchar();
     }
     str[i] = '\0';
     printf("%5.3s",str);
}