#include<stdio.h>
void merge(int a[],int low,int mid,int high){
    int i,j,k,temp[10];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            temp[k]=a[i];
            i++;
        }
        else{
            temp[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=high){
        temp[k]=a[j];
        j++;
        k++;
    }
    for(i=low;i<=high;i++)
        a[i]=temp[i];
}
void mergesort(int a[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
void printArr(int a[], int n){
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
void main(){
    int a[10],n,i;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Before sorting array elements are - \n");
    printArr(a,n);
    mergesort(a,0,n-1);
    printf("\nAfter applying Merge Sort, array elements are - \n");
    printArr(a,n);
}
