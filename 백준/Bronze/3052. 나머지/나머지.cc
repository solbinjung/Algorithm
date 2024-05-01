#include <stdio.h>

int main() {

	int n, i, j, temp;
	int arr[10] = { 0, };
	int count = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &n);
		arr[i] = n % 42;
	} // 배열에 수입력
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}// 배열 크기순으로 정렬 
	for (i = 0; i < 10; i++) {
		if (arr[i] != arr[i + 1]) {
			count += 1;
		}
	} // 서로 다른 나머지의 개수
	printf("%d", count);
	return 0;
}