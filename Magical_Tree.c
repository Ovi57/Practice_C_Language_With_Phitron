#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int top_rows = (N + 11) / 2;          
    int max_width = 2 * (top_rows - 1) + 1; 
    for (int i = 0; i < top_rows; i++) {
        int stars = 2 * i + 1;
        int spaces = (max_width - stars) / 2;

        for (int s = 0; s < spaces; s++) printf(" ");
        for (int s = 0; s < stars; s++) printf("*");
        printf("\n");
    }  
    int trunk_height = 5;
    int trunk_spaces = (max_width - N) / 2;

    for (int i = 0; i < trunk_height; i++) {
        for (int s = 0; s < trunk_spaces; s++) printf(" ");
        for (int s = 0; s < N; s++) printf("*");
        printf("\n");
    }
    return 0;
}
