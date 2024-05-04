#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *a, int *b)
{

    int temp=*a;
        *a=*b;
        *b=*a;

}
int heapify(int arr[],int n, int i)
{
    largest=i;
    left=2*i+1;
    right=2*i+2;

}
if(left<n && arr[left]>largest){
    largest=left;
}
if(right<n && arr[right]>largest){
    largest=right;
}
if(largest!=i)
{
    heapify(arr,n,largest);
    swap(&arr[0],&arr[i])

}
void heapSort(int arr[],int n)
{

    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i)
    }
    for(int i=n-1;i>=0;i--){
        swap(&arr[i],arr[0]);
    }
}
void printArray(int arr[],int n){
for(i=0;i<n;++i){
    printf("%d",arr[i]);
}
}
int main(){
 int arr[]={7,9,1,39,4,13,11,3}
int i=sizeof(arr)/sizeof(arr[0]);
 printf("array before sorting\n");
 heapSort(arr,n)
 printf("array after sorting\n");
}
