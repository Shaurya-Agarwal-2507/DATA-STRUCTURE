#include <stdio.h>

int main()
{
    int a[100], n, key;
    int low, high, mid;
    int found = 0;
    int i;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted array
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Initialize
    low = 0;
    high = n - 1;

    // Binary Search
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            printf("Element %d found at position %d\n", key, mid + 1);
            found = 1;
            break;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    // Element not found
    if (found == 0)
    {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
