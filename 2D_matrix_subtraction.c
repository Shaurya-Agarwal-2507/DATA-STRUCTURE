#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sub[10][10];
    int rows, cols, i, j;

    // Input rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input first matrix
    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix subtraction
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    // Display result
    printf("\nSubtraction of Matrices (A - B):\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
