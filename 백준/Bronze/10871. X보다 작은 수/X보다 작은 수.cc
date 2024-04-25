#include <stdio.h>

int main() {
	
	int n, x;
	int a[10000];

	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int j = 0; j < n; j++)
		if (x > a[j])
			printf("%d ", a[j]);
	
	return 0;
}