/*Write a program to convert temperature from Celsius to Fahrenheit.*/
#include<stdio.h>
int main()
{
float a, temp;
printf("Enter the temperature in Celcius\n");
scanf("%f",& a);
temp = 32+(a*9/5);
printf("New value of temperature in farenhiet:%f\n",temp);
return 0;
}