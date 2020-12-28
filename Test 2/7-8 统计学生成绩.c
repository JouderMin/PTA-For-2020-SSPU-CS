#include <stdio.h>

int main(void) {
    int N, grade, A = 0, B = 0, C = 0, D = 0, E = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &grade);
        if (grade >= 90) {
            A++;
        } else if (grade >= 80 && grade < 90) {
            B++;
        } else if (grade >= 70 && grade < 80) {
            C++;
        } else if (grade >= 60 && grade < 70) {
            D++;
        } else if (grade < 60) {
            E++;
        }
    }
    printf("%d %d %d %d %d", A, B, C, D, E);

    return 0;
}
