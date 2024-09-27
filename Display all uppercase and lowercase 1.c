#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    for(ch=65;ch<=122;ch++)
    {
        printf("%c",ch);
        if(ch==90)
            ch=ch+6;
    }
    return 0;
}
