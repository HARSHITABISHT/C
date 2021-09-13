//input two numbers and swap them using pointers by call by refrence

#include<stdio.h> //CALL BY REFRENCE

void swap(int *x,int *y)
{
    int t;
    t = *x ;
    *x = *y ;
    *y = t;
    printf("\n a is %d,b is %d",*x,*y);
}
int main()

{
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("\n enter the second number");
    scanf("%d",&b);
    printf("\n value of a is %d, value of b is %d",a,b);
    swap(&a,&b);
    printf("\n value of a is %d , value of b is %d",a,b);
    }