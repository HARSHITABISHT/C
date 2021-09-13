#include<stdio.h>
int main()
{int a=5;
int *ptr;
ptr=&a ;
printf("\n value of a = %d",a);
*ptr = 15;
printf("\n value of a= %d",a);

return(0);

}