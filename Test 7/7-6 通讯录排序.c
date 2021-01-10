#include <stdio.h>

struct friend {
    char name[11];
    int birth;
    char tel[18];
};

void swap(struct friend * a, struct friend * b) {
    struct friend temp;
    temp = *b;
    *b   = *a;
    *a   = temp;
}

int main(void) {
    int n;
    scanf("%d", &n);
    struct friend friend[n];

    for (int i = 0; i < n; i++) {
        scanf("%10s %d %17s", friend[i].name, &friend[i].birth, friend[i].tel);
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (friend[j].birth > friend[j + 1].birth) {
                swap(&friend[j], &friend[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s %d %s\n", friend[i].name, friend[i].birth, friend[i].tel);
    }

    return 0;
}
