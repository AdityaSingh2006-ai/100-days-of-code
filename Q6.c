/*Write a program to swap two numbers using a third variable.*/
#include<stdio.h>
int main()
{
int a, b, c;
printf("Enter the first number\n");
scanf("%i",& a);
printf("Enter the second number\n");
scanf("%i",& b);
c = a;
a = b;
b = c;
printf("after swap: new first:%i\n",a);
printf("after swap: new second:%i\n",b);
return 0;
}