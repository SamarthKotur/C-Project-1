#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int L;
    char st[100];

printf("Enter the string:");
gets(st);

L=strlen(st);

printf("String length is:%d",L);
return 0;

}
