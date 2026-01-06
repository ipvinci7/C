#include <stdio.h>
#include <string.h>
int len(char word[]);
//compare the length of the string
int main()
{
      char name[100];
      printf("Enter a name\n");
      gets(name);
      int length;
      length = len(name);
      printf("The length of the word is %d\n",length);
      printf("Why the size of the array is %d", sizeof(name));
}
int len(char word[])
{
    int len=0;
    int i = 0;
    while(word[i]!='\0')
    {
          i++;
    }
    len = i;
    return len;
}

int comparestring(char word1[100],char word2[100])
{
   //
   int len1 =0 ;
   int len2 = 0;
   len1 = (word1);
   len2 = (word2);
   int i =0;
   if(len1==len2)
   {
      printf("The length of word 1 is %d and length of word 2 is %d",len1,len2);
     for(int i =0;i<len1;i++)
     {
         if(word1[i]==word2[i])
         {
            i++;
         }
     }
   }
}