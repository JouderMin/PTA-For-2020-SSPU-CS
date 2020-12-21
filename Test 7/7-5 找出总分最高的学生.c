#include <stdio.h>

struct student {
    int num;
    char name[11];
    int result_1;
    int result_2;
    int result_3;
};

int getTotal(struct student a) { return a.result_1 + a.result_2 + a.result_3; }

int main(void) {
    int n;
    scanf("%d", &n);
    struct student student[n], max;

    for (int i = 0; i < n; i++) {
        scanf("%d %10s %d %d %d", &student[i].num, student[i].name, &student[i].result_1, &student[i].result_2, &student[i].result_3);
    }
    max = student[0];
    for (int i = 0; i < n; i++) {
        if (getTotal(max) < getTotal(student[i])) {
            max = student[i];
        }
    }
    printf("%s %05d %d\n", max.name, max.num, getTotal(max));

    return 0;
}
