#include <stdio.h>
#include <string.h>
void extract(char word[100],int start,int length);
int main()
{
   char word[100];
   printf("Enter a string\n");
   gets(word);
   printf("This is the string before extraction");
   puts(word);
   extract(word,2,7);
}

void extract(char word[100],int start,int length)
{
    char temp[50];
    int j = 0;
    for(int i=start;i<length;i++)
    {
         temp[j] = word[i];
         j++;
    }
    temp[j] = '\0';
    printf("The extracted string is %s",temp);
}