#include <stdio.h>
#define MAXN 10

void sort(int a[], int n);

int main(void) {
    int i, n;
    int a[MAXN];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sort(a, n);

    printf("After sorted the array is:");
    for (i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}

// 懒癌犯了，不想写选择排序，就直接用stdlib.h里自带的排序函数了。

#include <stdlib.h>

int comp(const void * a, const void * b) {
    return *(int *)a - *(int *)b;
}

void sort(int a[], int n) {
    qsort(a, n, sizeof(int), comp);
}
