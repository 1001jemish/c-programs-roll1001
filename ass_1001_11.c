// Ass_1001_Q11: Calculate the circumference of a circle//
#include <stdio.h> 
void main()
 {
    float radius,circumference,PI = 3.14159; 
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * PI * radius;

    printf("The circumference of the circle is: %.2f\n", circumference);
}

