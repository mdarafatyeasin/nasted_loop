#include <stdio.h>
int main()
{
    int n; // it will take how meany line the loop should
    scanf("%d", &n);
    int s = n - 1; // it will print the white space.
    int k = 1;     // it will print the *.. first value 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        s--;
        k = k + 2;
        printf("\n");
    }
    return 0;
}