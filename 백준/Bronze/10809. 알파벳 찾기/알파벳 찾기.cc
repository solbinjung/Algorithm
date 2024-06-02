#include <stdio.h>
#include <string.h>

int main() {

	char s[101];
	int alphabet[26];
	int length;
	
	for (int i = 0; i < 26; i++) {
		alphabet[i] = -1;
	} // -1로 초기화

	scanf("%s", &s);
	length = strlen(s);

	for (int i = 0; i < length; i++) {
		// 인덱스에 해당하는 부분에 알파벳의 위치를 넣음
		// 알파벳 - 'a'를 하면 알파벳의 인덱스를 구할 수 있음
		if (alphabet[s[i] - 'a'] == -1)
			alphabet[s[i] - 'a'] = i;
		else
			continue;
		// continue는 밑에 반복문을 무시하고 반복을 다시
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]);
	}
	return 0;
}