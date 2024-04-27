#include <stdio.h>

int main() {

	int a;
	int max = 0;
	int num = 0;

	for (int i = 1; i < 10; i++) {
		scanf("%d", &a);

		if (max < a) {
			max = a;
			num = i;
		}
	}
	printf("%d\n%d\n", max, num);

	return 0;
}