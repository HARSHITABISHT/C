#include<stdio.h>
int main()
{
    int arr[100];
    int*ptr=arr,n,i;
     printf("enter the size of array:");
     scanf("%d",&n);

     printf("enter the elements in the array:");
     for(i=0;i<n;i++)
     {
         scanf("%d",ptr);
         ptr++;
        
     }
     ptr==arr;
      
      printf("array elements:");
      for(i=0;i<n;i++)
      {
        printf("%d",*ptr);
        ptr++;
      }
}
