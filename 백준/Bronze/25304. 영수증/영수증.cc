#include <stdio.h>

int main() {
	
	int x, n;
	int price, num;
	int hap = 0;

	scanf("%d %d", &x, &n);

	for (int i=0; i < n; i++) {
		scanf("%d %d", &price, &num);

		hap += price * num;
	}
	if (x == hap)
		printf("Yes");
	else
		printf("No");

	return 0;
}