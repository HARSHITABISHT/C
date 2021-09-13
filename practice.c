#include<stdio.h>
int main()
{int a=5,*ptr;//pointer
printf("enter value:");
scanf("%d",&a);
printf("\n address of %d is : %d",a,&a);
ptr=&a;
printf("\n address of %d is : %d",a,ptr);
return(0);
}