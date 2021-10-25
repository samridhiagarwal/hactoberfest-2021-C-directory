#include<stdio.h>

int findMinIdx(int arr[6], int start, int end);
void swap(int* a, int* b);
void selectionsort(int arr[6], int start, int end);
void display(int arr[6]);

int findMinIdx(int arr[6], int start, int end)
{
    int i;
    int min_idx=start;
    for(i=start+1; i<=end; i++)
    {
        if(arr[min_idx]>arr[i])
        min_idx=i;
    }
    return min_idx;
}
 
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}



void selectionsort(int arr[6], int start, int end)
{
    int i,x,min_idx;

    for(i=start; i<=end; i++)
    {
        min_idx=i;
        x=findMinIdx(arr,i,end);
        swap(&arr[min_idx],&arr[x]);
    }

}


void display(int arr[6])
{
    int i;
    for(i=0; i<6; i++)
    {
        printf("%d ", arr[i]);
    }
   

}



void main()
{
    int arr[6]={1,6,2,5,8,9};
    selectionsort(arr,0,5);
    display(arr);
}
