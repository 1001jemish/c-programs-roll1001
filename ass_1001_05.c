//Ass_1001_Q5. Print the first N even numbers//
#include<stdio.h>
void main()
{
   int n,i;
   printf("Enter a number:- ");
   scanf("%d",&n);
   
   for(i=0;i<=n;i=i+1)
   {
      printf("%d ",i*2);
   }
}

