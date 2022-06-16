#include <stdio.h>

int main() {
    int a, b;
    char fail;

    scanf("%d %d", &a, &b);
    scanf("%c", &fail);

    if ((fail != '\0') && (fail != '\n')) {
        printf("n/a\n");
        return 0;
    } else {
        if (b != 0) {
            printf("%d %d %d %d\n", a+b, a-b, a*b, a/b);
        } else {
            printf("%d %d %d n/a\n", a+b, a-b, a*b);
        }
    }
    return 0;
}
