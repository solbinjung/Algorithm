#include <stdio.h>

int main() {

	int n;
	int m = 0;
	float arr[1000];
	int i;
	int score;
	float sum = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &score);
		arr[i] = score;
	}// 배열 설정
	
	for (i = 0; i < n; i++) {
		if (m < arr[i])
			m = arr[i];
	}// 최대값 구하기
	
	for (i = 0; i < n; i++) {
		arr[i] = (arr[i] / m) * 100;
		sum += arr[i];
	}
	printf("%f", sum / n);
	
	return 0;
}