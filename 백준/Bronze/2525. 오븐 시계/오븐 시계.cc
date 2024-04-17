#include <stdio.h>

int main() {
	int C;
	int h, m;

	scanf("%d %d", &h, &m);
	scanf("%d", &C);

	h += C / 60;
	m += C % 60;

	if (m >= 60) {
		m -= 60;
		h += 1;
	}
	h %= 24;
	printf("%d %d", h, m);

	return 0;
}