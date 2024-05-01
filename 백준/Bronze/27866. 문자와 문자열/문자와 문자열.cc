#include <stdio.h>

int main() {

	char S[1000];
	int n;

	scanf("%s", &S);
	scanf("%d", &n);

	printf("%c", S[n - 1]);

	return 0;
}