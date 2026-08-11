/*Write a program to input two numbers and display their sum, difference, product, and quotient.*/
#include<stdio.h>
int main()
{
float a, b, sum, difference, product, quotient;
printf("enter the first number\n");
scanf("%f",& a);
printf("enter the second number\n");
scanf("%f",& b);
sum = a+b;
difference = a-b;
product = a*b;
quotient = a/b;
printf("sum of two numbers:%0.2f\n",sum);
printf("difference of two numbers:%0.2f\n",difference);
printf("product of two numbers:%0.2f\n",product);
printf("quotient of two numbers:%0.2f\n",quotient);
return 0;
}