#include<stdio.h>
void shellSort(int *ar, int n){
	int i, j, c, temp;
	for(c=n/2; c>0; c/=2){
		for(i=c; i<n; i++){
			temp=ar[i];
			for(j=i; j>=c; j-=c){
				if(temp<ar[j-c])
					ar[j]=ar[j-c];
				else
					break;
			}
			ar[j]=temp;
		}
	}
}

void main(){
	int n, ar[20];
	int i;
	printf("\nEnter the number of elements you want to sort(within 20): ");
	scanf("%d", &n);
	printf("\nEnter the elements you want to sort: ");
	for(i=0; i<n; i++)
		scanf("%d", &ar[i]);
	shellSort(ar, n);
	printf("\nAfter sorting, the elements are:\t");
	for(i=0; i<n; i++){
		printf("%d\t", ar[i]);
	}
}
