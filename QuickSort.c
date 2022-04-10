#include <stdio.h>
int part(int a[], int start, int end)
{
  int pivot = a[end];
  int i = (start - 1), j;
  for (j = start; j <= end - 1; j++){
    if (a[j] < pivot){
      i++;
      int t = a[i];
      a[i] = a[j];
      a[j] = t;
    }
  }
  int t = a[i + 1];
  a[i + 1] = a[end];
  a[end] = t;
  return (i + 1);
}
void quick(int a[], int start, int end){
  if (start < end){
    int p = part(a, start, end);
    quick(a, start, p - 1);
    quick(a, p + 1, end);
  }
}
void printArr(int a[], int n){
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
  quick(a, 0, n - 1);
  printf("\nAfter applying Quick Sort array elements are - \n");
  printArr(a, n);
}
