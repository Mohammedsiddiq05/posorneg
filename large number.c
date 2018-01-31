#include<stdio.h>
void main()
{
int a=10;
int b=5;
int c=7;
if((a>b)&&(a>c))
printf("\n%dis the largest number",a);
else if((b>c)&&(b>>a))
printf("\n%dis the largest number",b);
else if((c>b)&&(c>a))
printf("%dis the largest number",c);
else
printf("all are equal");
}
