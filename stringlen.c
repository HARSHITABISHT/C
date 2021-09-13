#include<stdio.h>
int main()
{ char a[20];
char *ptr;
int c=0;
printf("\n enter value");
scanf("%s",a);
ptr=&a[0];
while(*ptr!='\0')
{ 
    c++;
ptr++;
}
printf("\n length of %s string is %d",a,c);




}