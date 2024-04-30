#include <stdio.h>

int main() {

	int n;
	int m;
	int arr[100] = { 0, };
	int i, j, k;

	scanf("%d %d", &n, &m);
	
	for (int a = 0; a < m; a++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int b = i; b <= j; b++)
			arr[b-1] = k;
	}
	for (int c = 0; c < n; c++) {
		printf("%d ", arr[c]);
	}
	
	return 0;
}