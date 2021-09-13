#include<stdio.h>
#include<stdlib.h>
int main()
{ int a,b,*ptr1=&a, *ptr2=&b;
printf("print the maximum number");
printf(" \n input the first numer:");
scanf("%d",ptr1);
printf("\n print the second number:");
scanf("%d",ptr2);
if(*ptr1>*ptr2)
{
    printf(" \n %d is the max number", *ptr1);
}
    else
    {
        printf("\n %d is the max number",*ptr2);
    }



}