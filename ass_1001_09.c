//Ass_1001_ Q9: Compute the sum of even elements in an array//
#include <stdio.h>
void main()
{
    int n,i,a[100],sum=0;
    printf("Enter a arr size:-");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("Enter a arr[%d]:-",i);
        scanf("%d",&a[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(a[i]%2==0)
        sum=sum+a[i];
    }
    printf("sum of even number:-%d",sum);
}

