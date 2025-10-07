// Ass_1001_Q8: Compute the sum of elements in a 1D array//
#include <stdio.h>
void main() 
{
    int n,i,arr[100],sum = 0;
    printf("Enter number of elements:-");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);

    for(i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]); 
        sum += arr[i]; 
    }
     printf("Sum of array elements =%d\n", sum); 
}

