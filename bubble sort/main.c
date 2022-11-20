#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[],int N);
void bubble_sort(int arr[],int N){
for(int i=0;i<N;i++)
{
    for(int j=0;j<N+1;j++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[j];
                arr[j+1]=arr[j];
                temp=arr[j+1];
        }
    }
}

main()
{
    int arr[N];
    printf("enter the unsorted array\n");
    scanf("%d",&arr[N]);
    printf("the sorted array is :%d\n",bubble_sort);
}
