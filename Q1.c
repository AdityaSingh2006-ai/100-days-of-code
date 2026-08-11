/*Write a program to input two numbers and display their sum.*/
#include<stdio.h>
int main()
{
float a, b, sum;
printf("enter the first number\n");
scanf("%f",& a);
printf("enter the second number\n");
scanf("%f",& b);
sum = a+b;
printf("sum of two numbers:%0.2f\n",sum);
return 0;
}