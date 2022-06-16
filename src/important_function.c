#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    char fail;

    scanf("%lf", &x);
    scanf("%c", &fail);

    if ((fail != '\0') && (fail != '\n')) {
        printf("n/a\n");
        return 0;
    } else {
        printf("%.1lf\n", y = 0.0007 * pow(x, 4) + ((22.8 * cbrt(x) - 1000) *
        x + 3) / (x * x / 2) - x * pow(10 + x, 2 / x) - 1.01);
    }
    return 0;
}
