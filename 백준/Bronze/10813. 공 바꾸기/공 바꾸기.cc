#include <stdio.h>

int main() {

	int n, m;
	int arr[100] = { 0, };
	int i, j;
	int num;

	scanf("%d %d", &n, &m);
	for (int a = 0; a < n; a++) {
		arr[a] = a+1;
	}
	for (int b = 0; b < m; b++) {
		scanf("%d %d", &i, &j);
		
		num = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = num;
	}
	for (int c = 0; c < n; c++) {
		printf("%d ", arr[c]);
	}
	return 0;
}