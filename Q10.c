/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
#include<stdio.h>
int main()
{
int a, b, c;
printf("Enter the amount of time in seconds\n");
scanf("%i",& a);
b = a/60;
c = a/3600;
printf("Required answer:%i:%i:%i\n", c, b, a);
return 0;
}