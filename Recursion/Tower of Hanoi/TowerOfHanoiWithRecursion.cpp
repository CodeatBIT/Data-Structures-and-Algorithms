#include <stdio.h>

int printMove(int start, int end){
	printf("\n%d -> %d", start, end);
	return 0;
}

int TOH(int n, int start, int end){
	int other;
	if( n == 1 ){
		printMove(start, end);
	} else {
		other = 6 - (start + end);
		TOH(n - 1, start, other);
		printMove(start, end);
		TOH(n - 1, other, end);
	}
	return 0;
}

int main(){
	int n, start,end;
	printf("Enter the number of disks: ");
	scanf("%d", &n);
	printf("Enter starting pole: ");
	scanf("%d", &start);
	printf("Enter ending pole: ");
	scanf("%d", &end);
	
	printf("\n");
	TOH(n, start , end);
	
	return 0;
}
