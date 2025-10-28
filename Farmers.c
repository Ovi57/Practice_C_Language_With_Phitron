#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        float new_days = (float)M1 * D / (M1 + M2);
        int days_saved = D - (int)new_days;
        printf("%d\n", days_saved);
    }
    return 0;
}
