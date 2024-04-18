#include <stdio.h>

int main() {
	
	int n, x;
	
	scanf("%d", &n);
	
	x = n / 4;

	for (int i = 0; i < x; i++) {
		printf("long ");
	}
	printf("int");
	return 0;
}