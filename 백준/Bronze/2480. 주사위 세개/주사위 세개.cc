#include <stdio.h>

int main() {
	int a, b, c;
	int amount = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c) {
		amount = 10000 + a * 1000;
	}
	else if (a != b && a != c && b != c) {
        if(a > b && a > c)
            amount = a * 100;
        else if (b > a && b > c)
            amount = b * 100;
        else
            amount = c * 100;
	}
	else {
		amount += 1000;
		if (a == b) {
			amount += a * 100;
		}
		else if (a == c) {
			amount += a * 100;
		}
		else {
			amount += b * 100;
		}
	}
	
	printf("%d", amount);

	return 0;
}