#include <stdio.h>  
int i;   
void heapify(int a[], int n, int i){  
  int largest = i;   
  int left = 2 * i + 1;   
  int right = 2 * i + 2;     
  if (left < n && a[left] > a[largest])  
    largest = left;    
  if (right < n && a[right] > a[largest])  
    largest = right;  
  if (largest != i) {   
    int temp = a[i];  
    a[i] = a[largest];  
    a[largest] = temp;  
    heapify(a, n, largest);  
  }  
}
void heapSort(int a[], int n){ 
	int temp; 
  for (i = n / 2 - 1; i >= 0; i--)  
    heapify(a, n, i);  
  for (i = n - 1; i >= 0; i--) {  
    temp = a[0];  
    a[0] = a[i];  
    a[i] = temp;  
    heapify(a, i, 0);  
  }  
}  
void printArr(int arr[], int n){  
  for (i = 0; i < n; ++i){  
    printf("%d", arr[i]);  
    printf(" ");  
  }       
}  
int main(){  
  int a[10], n, i;
  printf("Enter the number of elements in the array\n");
  scanf("%d", &n);
  printf("Enter the elements of the array\n");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Before sorting array elements are - \n");  
  printArr(a, n);  
  heapSort(a, n);  
  printf("\nAfter applying Heap Sort, array elements are - \n");    
  printArr(a, n);  
}
