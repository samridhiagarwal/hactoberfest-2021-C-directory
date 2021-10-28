#include<stdio.h>

int main() 
{
    int n, i, j;
    printf("\nEnter the value of N: ");
    scanf("%d", &n);
    printf("\n");
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 0; j <= n; j++)
        {

            if (j >= n / 2 - i && j <= n / 2 + i)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = n; j >= 0; j--)
        {
            if (j >= i && j <= n - i)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
