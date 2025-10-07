// Ass_1001_Q14: Print the first N natural numbers in reverse//
#include<stdio.h>
void main()
{
   int num, i;
   printf ("Enter the number:-");
   scanf("%d",&num);
   
   for(i=num;i>=0;i--)
   {
       printf("\n%d",i); 
   }
}

