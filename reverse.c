#include <stdio.h>

int palidrome(char word1[100],char word2[100]);
int wordlen(char example[]);
int main()
{
    char string[100],rev[100];
    int i = 0;
    int j;
    printf("Enter a string\n");
    gets(string);
    int len = 0;
    while(string[i]!='\0')
    {
        i++;
    }
    len = i;
    j = 0;
   for(int i=len-1;i>=0;i--)
   {
    rev[j] = string[i];
    j++;
   }
   rev[j] = '\0';
   printf("%s",rev);
   palidrome(string,rev);

    return 0;
}

//check palidrome
int palidrome(char word1[100],char word2[100])
{
     //check for same
     int len1 = 0;
     int len2 = 0;
     int i = 0;
     int j = 0;
    len1 = wordlen(word1);
    len2 = wordlen(word2);
    printf("The length of the word is %d\n",len1);
    printf("The length of the second word is %d\n",len2);
    if(len1==len2)
    {
     printf("The both words have same length");
     while(word1[i]!='\0')
       if(word1[i]==word2[i])
       {
           i++;
       }
       if(i==len1)
       {
           printf("The word is palidrome");
       }
      
    }else
    {
        printf("The length are not same");
    }
}

int wordlen(char example[])
{
    int length = 0;
    int i =0;
    while(example[i]!='\0')
    {
         i++;
    }
    length = i;
    return length;
}