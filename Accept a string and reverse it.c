#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j;
    char st[100];
    char temp;
    printf("Enter a string:");
    gets(st);
     for(j=0;st[j+1]!='\0';j++);
     for(i=0;i<j;i++,j--)
     {
         temp=st[i];
         st[i]=st[j];
         st[j]=temp;
     }
     printf("Reverse string is:%s",st);
     return 0;
}
