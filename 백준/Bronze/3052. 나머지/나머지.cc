#include <stdio.h>

int main() {

	int n, i, j;
	int arr[10] = { 0, };
	int result = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &n);
		arr[i] = n % 42;
	} // 배열에 수입력
	for (i = 0; i < 10; i++) {
		int count = 0;
		for (j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				count++;
			}
		}
		if (count == 0)
			result++;
	}
	printf("%d", result);
	return 0;
}