#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
     char word1[10],word2[10],final[20];
     printf("Enter word 1\n");
     gets(word1);
     printf("Enter word 2\n");
     gets(word2);
     int i = 0;
     int len = 0;
     while(word1[i]!='\0')
     {
         final[i] = word1[i];
         i++;
     }
     len = i;
     printf("This is final before word 2 is added \n");
     puts(final);
     while (word2[i]!='\0')
     {
        final[len] =word2[i];
        len++;
     }
     final[len] ='\0';
     printf("The word is :\n");
     puts(final);
     
}