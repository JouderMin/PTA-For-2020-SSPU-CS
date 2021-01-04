#include <stdio.h>
#include <string.h>

struct word_node {
    char word[11];
    int length;
};

void swap(struct word_node *a, struct word_node *b) {
    struct word_node temp;

    temp = *b;
    *b   = *a;
    *a   = temp;
}

void sort(struct word_node *a, int length) {
    for (int i = 1; i < length; i++) {
        for (int j = 0; j < length - 1; j++) {
            if (a[j].length > a[j + 1].length) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

int main(void) {
    struct word_node words[20];
    char temp[11];
    int i;

    scanf("%10s", temp);
    for (i = 0; strcmp(temp, "#"); i++) {
        strcpy(words[i].word, temp);
        words[i].length = strlen(temp);
        scanf("%10s", temp);
    }
    sort(words, i);
    for (int j = 0; j < i; j++) {
        printf("%s ", words[j].word);
    }

    return 0;
}
