#include<stdio.h>
int main()
{ int n,i;
int *ptr;
printf("enter a number to print the table:");
scanf("\n %d",&n);
ptr=&n;
printf("\n tabel of %d \n:",n);
for(i=1;i<=10;i++)
{ 
    *ptr=n*i;
    printf("%d*%d = %d \n",n,i,ptr);
}
return(0);
}