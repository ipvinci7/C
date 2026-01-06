#include <stdio.h>
#include <string.h>
//in c a string is a null terminated character array '\'
int strlength(char word[]);
char capital(char word[]);
int main()
{
   int num;
   char word[50];
   printf("Enter the word\n");
   fgets(word,sizeof(word),stdin);
   num = strlength(word);
   printf("The length of the word is %d",num); 
   char example[100];
   printf("Enter a word\n");
   scanf("%s",example);
   capital(example);

}


//utility function to find the length of string
int strlength(char word[])
{
    int len;
    int i = 0;
   while(word[i]!='\0')
    {
        i++;
    }
    len = i;
    return len;
}

char capital(char word[])
{
     char str[100],upperstr[100];
     int i = 0;
     printf("\n Enter the string : ");
     gets(str);
     while(str[i]!='\0')
     {
          if(str[i]>='a' && str[i]<='z')
              upperstr[i] = str[i]-32;
          else
           upperstr[i] = str[i];
           i++;
     }
     upperstr[i]='\0';
     printf("\n The String converted into upper is : %s",upperstr);
     return 0;
}
