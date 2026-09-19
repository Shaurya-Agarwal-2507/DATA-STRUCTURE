#include <stdio.h>

// Function to merge two sorted parts
void merge(int a[], int low, int mid, int high)
{
    int temp[100];
    int i = low;
    int j = mid + 1;
    int k = low;

    // Compare and merge elements
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from left part
    while (i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements from right part
    while (j <= high)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    // Copy sorted elements back to original array
    for (i = low; i <= high; i++)
    {
        a[i] = temp[i];
    }
}

// Function for Merge Sort
void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        // Divide the array
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        // Merge sorted parts
        merge(a, low, mid, high);
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

    // Call Merge Sort
    mergeSort(a, 0, n - 1);

    // Display sorted array
    printf("\nArray after Merge Sort:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
