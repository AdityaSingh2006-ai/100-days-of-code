/*Write a program to find and display the sum of the first n natural numbers.*/
#include<stdio.h>
int main()
{
int s, a;
printf("To find the sum of first n natural numbers, enter the value of n\n");
scanf("%i",& a);
s = a*(a+1)/2;
printf("The required answer is:%i\n", s);
return 0;
}