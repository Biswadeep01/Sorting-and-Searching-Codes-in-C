#include <stdio.h>
int getMax(int a[], int n){
    int max = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
void bucket(int a[], int n){
    int max = getMax(a, n);
    int bucket[max], i, j;
    for (i = 0; i <= max; i++){
        bucket[i] = 0;
    }
    for (i = 0; i < n; i++){
        bucket[a[i]]++;
    }
    for (i = 0, j = 0; i <= max; i++){
        while (bucket[i] > 0){
            a[j++] = i;
            bucket[i]--;
        }
    }
}
void printArr(int a[], int n){
    for (int i = 0; i < n; ++i)
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
    printArr(a, n);
    bucket(a, n);
    printf("\nAfter applying Bucket Sort, array elements are - \n");
    printArr(a, n);
}