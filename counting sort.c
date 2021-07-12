#include<stdio.h>
#define max 25

int main()
{
    int arr[25];
    int list[25];

    int n,i,j;

    //input list
    printf("Enter the number of element: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }

    //starting counting sort
    memset(arr,0,sizeof(arr));

    for(i=0;i<n;i++)
    {
        arr[list[i]]++;
    }

    //displaying sorted list

    printf("Sorted List: \n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<arr[i];j++)
            printf("%d ",i);
    }

    return 0;
}

