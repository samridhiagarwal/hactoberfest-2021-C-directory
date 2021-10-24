// C program to implement iterative Binary Search
#include <stdio.h>

int binarySearch(int array[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (array[mid] == target)
            return mid;

        if (array[mid] < target)
            start = mid + 1;

        else
            end = mid - 1;
    }

    return -1;
}

int main(void)
{
    int a[] = {4, 7, 2, 6, 8, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int target = 10;
    int ans = binarySearch(a, 0, n - 1, target);
    if (ans == -1)
    {
        printf("Element not present");
    }
    else
    {
        printf("Element at index %d",ans);
    }
    return 0;
}
