#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter the first number to be swapped:");
scanf("%d", &a);
printf("Enter the second number to be swapped:");
scanf("%d", &b);
temp=a;
a=b;
b=temp;
printf("Numbers after swapping are:%d %d", a, b );
return 0;
}
