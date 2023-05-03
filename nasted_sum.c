#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    int a[n];
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // printf("%d %d\n", a[i], a[j]);
            if (a[i] + a[j] == x)
            {
                printf("%d + %d = %d", a[i], a[j], x);
                printf("\n");
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("Couldn't find any match");
    }
    return 0;
}