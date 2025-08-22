#include <stdio.h>

int main(){
	int a, b, c; 
	
	scanf("%d %d %d", &a, &b, &c); 
	
	printf("%d eh menor que %d E %d eh menor que %d = %d\n", a, b, b, c, a < b && b < c);
	printf("%d eh maior que %d OU %d eh menor que %d = %d\n", a, b, b, c, a > b || b < c);	
	printf("%d NAO eh igual a %d = %d\n", a, b, !(a == b));	
	printf("(%d eh menor que %d) E (%d eh menor que %d) = %d\n", a, b, b, c, (a < b ) && (b < c));
	printf("(%d eh maior que %d) OU (%d eh maior que %d) = %d\n", a, b, b, c, (a > b) || (b > c));
	printf("NAO (%d eh menor que %d) E (%d eh menor que %d) = %d\n", a, b, b, c, !(a < b) && (b < c));
	return 0; 
}
