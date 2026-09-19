#include <stdio.h>

int main()
{
    int a[100], n, i, key, found = 0;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear Search
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Element %d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }

    // If element is not found
    if (found == 0)
    {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
