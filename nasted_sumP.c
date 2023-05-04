#include <stdio.h>
int main()
{
    int n,k,flag=0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i]+arr[j]==k){
                printf("%d + %d = %d\n", arr[i], arr[j], k);
                flag=1;
            }
        }
    }
    if(flag==0){
        printf("no match");
    }
    return 0;
}