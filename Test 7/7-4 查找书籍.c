#include <stdio.h>

struct book {
    char name[31];
    double price;
};

int main(void) {
    int n;
    scanf("%d\n", &n);
    struct book book[n], max, min;

    for (int i = 0; i < n; i++) {
        gets(book[i].name);
        scanf("%lf\n", &book[i].price);
    }
    max = book[0];
    min = book[0];
    for (int i = 0; i < n; i++) {
        if (max.price < book[i].price) {
            max = book[i];
        }
        if (min.price > book[i].price) {
            min = book[i];
        }
    }
    printf("%.2f, %s\n", max.price, max.name);
    printf("%.2f, %s\n", min.price, min.name);

    return 0;
}
