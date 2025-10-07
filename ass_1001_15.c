// Ass_1001_Q15: Find the second largest element in an array//
#include<stdio.h>
void main()
{
 int arr[100],i,n,temp,j;
 printf("\n How many elements you want:- ");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
    printf("Entre arr[%d]:- ",i+1);
    scanf("%d",&arr[i]);
 }
 for(i=0;i<n-1;i++)
 {
    for(j=i+1;j<n;j++)
    {
        if(arr[i]<arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
 }
 printf("\n second largest element is %d",arr[1]);
 }

