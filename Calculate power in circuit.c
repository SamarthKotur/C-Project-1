#include<stdio.h>
 int main()

 {
     float voltage,current,power;
     printf("Enter voltage (in volts): ");
     scanf("%f", &voltage);
      printf("Enter current (in amperes): ");
     scanf("%f", &current);

     power=voltage*current;
     printf("Power(in Watts)=%.2f W\n",power);
     return 0;

 }
