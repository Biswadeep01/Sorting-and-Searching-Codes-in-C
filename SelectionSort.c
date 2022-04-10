#include<stdio.h>
void main(){
	int a[20], i, j, temp, n, min;
	printf("\nEnter the no. of elements to sort (within 20): ");
	scanf("%d", &n);
	printf("\nEnter the elements:");
	for(i=0; i<=n-1; i++)
		scanf("%d",&a[i]);
	for(i=0; i<n-1; i++){
		min =i;
		for(j=i+1; j<n; j++){
			if(a[j]<a[min])
			min = j;
		}
		if(min !=i){
			temp = a[min];
			a[min] = a[i];
			a[i]=temp;
		}
	}
	printf("\nSorted array is:");
	for(i=0; i<=n-1; i++)
		printf("\t%d\t", a[i]);
}
