#include <stdio.h>
#include <string.h>

int main() {

	int t;
	char s[101];

	scanf("%d", &t);

	for(int i=0; i<t;i++){
		scanf("%s", s);
		printf("%c%c\n", s[0], s[strlen(s) - 1]);
	}
	return 0;
}