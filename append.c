#include <stdio.h>
int main()
{
    char Dest_Str[100],Source_str[50];
    int i=0,j=0;
    printf("\n Enter the source string : ");
    gets(Source_str);
    printf("\n Enter the destination string :");
    gets(Dest_Str);
    while(Dest_Str[i]!='\0');
         i++;
    while(Source_str[j]!='\0')
    {
        Dest_Str[i] = Source_str[j];
        i++;
        j++;
    }
    Dest_Str[i] = '\0';
    printf("\n After appending, the destination string is : ");
    puts(Dest_Str);
    return 0;
}