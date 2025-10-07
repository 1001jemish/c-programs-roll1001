//Ass_1001_Q4: Convert meters to centimeters//
#include <stdio.h> 
void main() 
{
    int meters,centimeters;      
    printf("Enter the value of meters:-");
    scanf("%d",&meters);
    centimeters = meters * 100;
    printf("%d meters = %d centimeters.\n", meters, centimeters);
}
