#include<stdio.h>
void main(){
	int i, first, last, mid, n, s, a[50];
	printf("\nEnter the number of elements(within 50): ");
	scanf("%d", &n);
	printf("\nEnter the %d elements: ", n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	printf("\nEnter the element you want to search: ");
	scanf("%d", &s);
	first = 0;
	last = n-1;
	mid = (first + last)/2;	
	while(first <= last){
		if(a[mid] < s)
			first = mid +1; 
		else if(a[mid] == s){
			printf("\n%d found at location %d.", s, (mid+1));
			break;
		}
		else
			last = mid - 1;
		mid = (first +last)/2;
	}
	if (first > last)
		printf("\nNot found. %d isn't present in the list.", s);
}
