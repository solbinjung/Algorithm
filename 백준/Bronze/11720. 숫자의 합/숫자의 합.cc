#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s[101];
    
    scanf("%d %s",&n, &s);

    int sum = 0;
    
    for(int i=0; i<n;i++){
        sum +=s[i] - '0';
    }
    printf("%d", sum);

    return 0;
}