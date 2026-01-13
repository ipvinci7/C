#include <stdio.h>
int read();
int main()
{
    int c;
    //this does not prompt you it just stays and watches you until you enter 
    read();
}

int read()
{
    int c;
    while(c=getchar()!=EOF)
    {
        printf("%c\n",c);
    }
    return 0;
}