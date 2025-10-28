#include <stdio.h>

int main() {
    char S[100001];
    scanf("%s", S);
    
    int count = 0;
    for (int i = 0; S[i] != '\0'; i++) {
        char c = S[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
