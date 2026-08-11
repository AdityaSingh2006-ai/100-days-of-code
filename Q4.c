/*Write a program to calculate the area and circumference of a circle given its radius.*/
#include<stdio.h>
#define pi 3.141
int main()
{
float radius, area, circumference;
printf("Enter radius of circle\n");
scanf("%f",& radius);
area = pi*radius*radius;
circumference = 2*pi*radius;
printf("area of circle:%0.2f\n",area);
printf("circumference of circle:%0.2f\n",circumference);
return 0;
}