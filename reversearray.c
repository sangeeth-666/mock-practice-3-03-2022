#include <stdio.h>
int reverse(int arr[],int n);

int main()
{
    int i,n;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
}
int reverse(int arr[],int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf("Reverse of an array:%d\n",arr[i]);
    }

    return 0;
}

