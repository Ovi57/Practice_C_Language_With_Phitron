#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int sumPos = 0, sumNeg = 0;
    int num;

    for(int i = 0; i < N; i++) {
        scanf("%d", &num);
        if(num > 0) {
            sumPos += num;   
        } else if(num < 0) {
            sumNeg += num;   
        }
    }

    printf("%d %d\n", sumPos, sumNeg);

    return 0;
}
