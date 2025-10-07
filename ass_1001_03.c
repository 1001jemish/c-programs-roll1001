// Ass_1001_Q3: Convert miles to kilometers//
#include <stdio.h> 
void main()
{
    float kilometers,miles; 
    printf("Enter the distance in kilometers: ");
    scanf("%f", &kilometers);

    miles = kilometers *  1.60934;

    printf("%.2f kilometers is equal to %.2f miles.\n", kilometers, miles);
}


