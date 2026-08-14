/*Write a program to calculate simple and compound interest for given principal, rate, and time.*/
#include<stdio.h>
int main()
{
float principle, time, rate, interest;
printf("Enter Principle Amount\n");
scanf("%f",& principle);
printf("Enter tenure\n");
scanf("%f",& time);
printf("Enter the rate of interest\n");
scanf("%f",& rate);
interest = principle*time*rate/100;
printf("SI : %0.2f\n",interest);
return 0;
}