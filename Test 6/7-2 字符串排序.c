#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp[81] = {0};

    strcpy(temp, b);
    strcpy(b, a);
    strcpy(a, temp);
}

int main(void) {
    char c[5][81];

    scanf("%80s", c[0]);
    scanf("%80s", c[1]);
    scanf("%80s", c[2]);
    scanf("%80s", c[3]);
    scanf("%80s", c[4]);
    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (strcmp(c[j], c[j + 1]) > 0) {
                swap(c[j], c[j + 1]);
            }
        }
    }
    printf("After sorted:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", c[i]);
    }

    return 0;
}
