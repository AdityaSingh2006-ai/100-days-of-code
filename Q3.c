/*Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/
#include<stdio.h>
int main()
{
float a, b, area, perimeter;
printf("enter the length\n");
scanf("%f",& a);
printf("enter the breadth\n");
scanf("%f",& b);
area = a*b;
perimeter = 2*(a+b);
printf("area of rectangle:%0.2f\n",area);
printf("perimeter of rectangle:%0.2f\n",perimeter);
return 0;
}