#include <stdio.h>

struct stu {
    int num;
    char name[11];
    int score;
};

int main(void) {
    int n;
    double average = 0;
    scanf("%d", &n);
    struct stu student[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %10s %d", &student[i].num, student[i].name, &student[i].score);
    }
    for (int i = 0; i < n; i++) {
        average += student[i].score;
    }
    average /= n;
    printf("%.2f\n", average);
    for (int i = 0; i < n; i++) {
        if (student[i].score < average) {
            printf("%s %05d\n", student[i].name, student[i].num);
        }
    }

    return 0;
}
