#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10];
    int rows, cols, i, j;

    // Input rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input matrix
    printf("\nEnter elements of the matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Find transpose
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    // Display original matrix
    printf("\nOriginal Matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Display transpose
    printf("\nTranspose Matrix:\n");

    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
