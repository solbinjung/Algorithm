#include <stdio.h>

int main() {

	int n;
	int arr[30] = { 0, };

	for (int i = 0; i < 28; i++) {
		scanf("%d", &n);
		arr[n-1] = n;
	}

	for (int j = 0; j < 30; j++) {
		if (arr[j] == 0)
			printf("%d\n", j+1);
	}
	return 0;
}