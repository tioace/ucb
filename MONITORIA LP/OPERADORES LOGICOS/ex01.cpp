#include <stdio.h>

int main(){
	int x, y; 
	scanf("%d %d", &x, &y); 
	
	printf("\n");
	printf("%d == %d = %d\n", x, y, x == y);
	printf("%d != %d = %d\n", x, y, x != y);
	printf("%d > %d = %d\n", x, y, x > y);
	printf("%d < %d = %d\n", x, y, x < y);
	printf("%d >= %d = %d\n", x, y, x >= y);
	printf("%d <= %d = %d\n", x, y, x <= y);
	
	return 0; 
}
