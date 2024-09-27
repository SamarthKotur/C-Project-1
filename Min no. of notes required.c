#include<stdio.h>

int main()
{
int amount;
 int notes_500,notes_100,notes_50,notes_10,notes_5,notes_2,notes_1;
  printf("Enter the amount: ");
  scanf("%d",&amount);

  notes_500=amount/500;
  amount=amount%500;

  notes_100=amount/100;
  amount=amount%100;

  notes_50=amount/50;
  amount=amount%50;

  notes_10=amount/10;
  amount=amount%10;

  notes_5=amount/5;
  amount=amount%5;

  notes_2=amount/2;
  amount=amount%2;

  notes_1=amount;

   printf("Minimum number of notes/coins required:\n");
   printf("500:%d\n",notes_500);
      printf("100:%d\n",notes_100);
         printf("50:%d\n",notes_50);
            printf("10:%d\n",notes_10);
               printf("5:%d\n",notes_5);
                  printf("2:%d\n",notes_2);
                     printf("1:%d\n",notes_1);
  return 0;
  }


