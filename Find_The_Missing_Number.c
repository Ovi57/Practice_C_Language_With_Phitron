#include <stdio.h>

int main() {
    long long T;
    scanf("%lld", &T);

    while (T--) {
        long long M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        long long P = A * 1LL * B * C; 

        if (P == 0) {
            if (M == 0) {
                printf("0\n");
            } else {
                printf("-1\n");
            }
        } 
        else {
            if (M % P == 0) {
                printf("%lld\n", M / P);
            } else {
                printf("-1\n");
            }
        }
    }
    return 0;
}
