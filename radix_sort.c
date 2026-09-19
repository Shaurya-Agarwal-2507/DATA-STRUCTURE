#include <stdio.h>

// Find the largest element
int getMax(int a[], int n)
{
    int max = a[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}

// Counting sort according to digit
void countingSort(int a[], int n, int exp)
{
    int output[100];
    int count[10] = {0};
    int i;

    // Count occurrences of each digit
    for (i = 0; i < n; i++)
    {
        count[(a[i] / exp) % 10]++;
    }

    // Calculate cumulative count
    for (i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    // Build output array
    for (i = n - 1; i >= 0; i--)
    {
        output[count[(a[i] / exp) % 10] - 1] = a[i];
        count[(a[i] / exp) % 10]--;
    }

    // Copy output back to original array
    for (i = 0; i < n; i++)
    {
        a[i] = output[i];
    }
}

// Radix Sort function
void radixSort(int a[], int n)
{
    int max = getMax(a, n);
    int exp;

    // Sort according to each digit
    for (exp = 1; max / exp > 0; exp = exp * 10)
    {
        countingSort(a, n, exp);
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

    // Call Radix Sort
    radixSort(a, n);

    // Display sorted array
    printf("\nArray after Radix Sort:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
