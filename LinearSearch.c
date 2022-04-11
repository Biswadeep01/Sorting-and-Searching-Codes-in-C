#include <stdio.h>
int main(){
	int i, n,num;
	int ar[50];
	printf("Enter the number of elements(within 50): ");
	scanf("%d", &n);
	printf("Enter numbers: " );
	for (i = 0; i < n; i++){
	  scanf("%d", &ar[i]);
	}
	printf("enter the element to be searched :\n");
	scanf("%d", &num);
	for (i = 0; i < n; i++){
		if (ar[i] == num){
		  printf(" the item found at position :%d\n", i+1);
		  return;
		}
	}
	printf("The item not found");
}
