#include <stdio.h>

int main() {
	
	int n;
	int a[1000000];

	int max, min;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	max = a[0];
	for (int j = 1; j < n; j++) {
		if (max < a[j]) {
			max = a[j];
		}
	}

	min = a[0];
	for (int j = 1; j < n; j++) {
		if (min > a[j]) {
			min = a[j];
		}
	}
	printf("%d %d",min, max);

	return 0;
}