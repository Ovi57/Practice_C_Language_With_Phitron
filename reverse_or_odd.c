#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int A[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    
    int start = N - 1;
    if(start % 2 == 0) {
        start--;  
    }

    
    for(int i = start; i > 0; i -= 2) {
        printf("%d ", A[i]);
    }

    return 0;
}
