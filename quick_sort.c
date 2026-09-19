#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    int j;

    for (j = low; j < high; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }

    // Place pivot in its correct position
    swap(&a[i + 1], &a[high]);

    return i + 1;
}

// Quick Sort function
void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);

        // Sort elements before pivot
        quickSort(a, low, pi - 1);

        // Sort elements after pivot
        quickSort(a, pi + 1, high);
    }
}

int main()
{
    int a[100], n, i;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Call Quick Sort
    quickSort(a, 0, n - 1);

    // Display sorted array
    printf("\nArray after Quick Sort:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
