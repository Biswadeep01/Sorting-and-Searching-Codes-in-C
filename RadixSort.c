#include <stdio.h>
int getMax(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
void countingSort(int a[], int n, int p) {
    int output[n + 1], i;
    int count[10] = {0};
    for (i = 0; i < n; i++)
        count[(a[i] / p) % 10]++;
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (i = n - 1; i >= 0; i--){
        output[count[(a[i] / p) % 10] - 1] = a[i];
        count[(a[i] / p) % 10]--;
    }
    for (i = 0; i < n; i++)
        a[i] = output[i];
}
void radixsort(int a[], int n){
    int max = getMax(a, n);
    int p;
    for (p = 1; max / p > 0; p *= 10)
        countingSort(a, n, p);
}
void printArray(int a[], int n){
    for (int i = 0; i < n; ++i)
        printf("%d  ", a[i]);
    printf("\n");
}

void main(){
    int a[10], n, i;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Before sorting array elements are - \n");
    printArray(a, n);
    radixsort(a, n);
    printf("After applying Radix sort, the array elements are - \n");
    printArray(a, n);
}