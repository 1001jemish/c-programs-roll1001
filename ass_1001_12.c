// Ass_1001_Q12: Reverse words in a string//
#include <stdio.h>
void main()
{
 int i,len=0;
 char name[100];
 printf("enter your name:-");
 fgets(name, sizeof(name),stdin);

 for(i=0;name[i]!='\0';i++)
 {
   len ++;
 }
 printf("length of the string is %d",len-1);
 
 for(i=len;i>=0;i--)
 {
   printf("%c",name[i]);
 }
}

