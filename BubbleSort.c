#include <stdio.h>
int main(){
int i, j, n,num;
int ar[20];
printf("\nEnter the number of elements(within 20): ");
scanf("%d", &n);
printf("\nEnter numbers: " );
for (i = 0; i < n; i++)
  scanf("%d", &ar[i]);
for (i = 0; i <(n-1) ; i++){
	for (j = 0; j < (n-1)-i ; j++){
		 if (ar[j] > ar[j+1]){
		 	num = ar[j];
		 	ar[j] = ar[j+1];
		 	ar[j+1] = num;
		}
	}
}
printf("\nSorted in ascending order:\t");
for (i=0; i<n; i++)
	 printf("%d\t", ar[i]);
return 0;
}
