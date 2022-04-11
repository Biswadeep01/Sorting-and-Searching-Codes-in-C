#include<stdio.h>
void insertionSort(int a[], int n){
    int i, j, temp;
    for (i = 1; i < n; i++){
        temp = a[i];
        for (j = i - 1; j >= 0 && a[j] > temp; j--)
            a[j + 1] = a[j];
        a[j + 1] = temp;
    }
}
void printarr(int a[], int n){
    int i;
    for (i = 0; i < n; ++i)
        printf("%d  ", a[i]);
}
void main(){
    int a[10], n, i;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Before sorting array elements are - \n");
    printarr(a, n);
    insertionSort(a, n);
    printf("\nAfter applying Insertion Sort, array elements are - \n");
    printarr(a, n);
}
