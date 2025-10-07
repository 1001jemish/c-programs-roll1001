// Ass_1001_Q7: Check whether a number is perfect//
#include <stdio.h>
void main()
{ 
  int i,num,sum=0; 
  printf("Enter a number: "); 
  scanf("%d",&num);
  
  for(i = 1; i <  num; i++)
  {
    if(num % i == 0) 
    {
       sum += i; 
    }
  }
  if(sum == num)
  {
      printf("%d is a perfect number", num); 
  }
   else
  {
      printf("%d is not a perfect number", num);
  }  
}

