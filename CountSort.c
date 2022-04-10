#include <stdio.h>
int getMax(int a[], int n){
    int max = a[0], i;
    for (i = 1; i < n; i++){
        if (a[i] > max)
            max = a[i];
    }
    return max; 
}
void countSort(int a[], int n)
{
    int output[n + 1], i;
    int max = getMax(a, n);
    int count[max + 1]; 
    for (i = 0; i <= max; ++i)
        count[i] = 0; 
    for (i = 0; i < n; i++) 
        count[a[i]]++;
    for (i = 1; i <= max; i++)
        count[i] += count[i - 1]; 
    for (i = n - 1; i >= 0; i--){
        output[count[a[i]] - 1] = a[i];
        count[a[i]]--; 
    }
    for (i = 0; i < n; i++)
    {
        a[i] = output[i];
    }
}

void printArr(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
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
    countSort(a, n);
    printf("\nAfter applying Count Sort, array elements are - \n");
    printArr(a, n);
}