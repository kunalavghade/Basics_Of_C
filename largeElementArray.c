#include<stdio.h>

int largest_element(int arr[],int n)
{
    int i,max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}

int main()
{
    int arr[] = {9,6,2,1,3,55};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("The largest element in array is : %d",largest_element(arr,n));

    return 0;
}
