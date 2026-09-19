#include <stdio.h>

int main()
{
    int a[100], n;
    int i, j, key;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Insertion Sort
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        // Move elements greater than key one position ahead
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        // Insert key at correct position
        a[j + 1] = key;
    }

    // Display sorted array
    printf("\nArray after Insertion Sort:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
