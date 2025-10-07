
// Ass_1001_Q13: Subtract two matrices//
#include <stdio.h>
void main()
 {
    int rows, cols,a[100][100],b[100][100],ans[100][100],i,j;
    printf("Enter the number of rows:- ");
    scanf("%d", &rows);
    printf("Enter the number of columns:- ");
    scanf("%d", &cols);

    printf("\nEnter elements for the first matrix:-\n");
    for ( i = 0; i < rows; i++) 
    {
        for ( j = 0; j < cols; j++) 
        {
            printf("Enter value of a[%d][%d]:- ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter elements for the second matrix:-\n");
    for ( i = 0; i < rows; i++) 
    {
        for ( j = 0; j < cols; j++)
         {
            printf("Enter value of b[%d][%d]:- ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for ( i = 0; i < rows; i++) 
    {
        for ( j = 0; j < cols; j++)
        {
            ans[i][j] = a[i][j] - b[i][j];
        }
    }
    
    printf("\na matrix :\n");
    for ( i = 0; i < rows; i++)
     {
        for ( j = 0; j < cols; j++) 
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nb matrix :\n");
    for ( i = 0; i < rows; i++)
     {
        for ( j = 0; j < cols; j++) 
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("\nans matrix:\n");
    for ( i = 0; i < rows; i++)
     {
        for ( j = 0; j < cols; j++) 
        {
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }
}


