#include <stdio.h>
#include <stdlib.h>

int main()
{
   long nc;
   nc = 0;
   while(getchar()!=EOF)
   ++nc;
   printf("Length of the character %ld\n",nc);
   return 0;
}