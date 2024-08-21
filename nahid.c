#include <stdio.h>

int main() {
    char a[100];
    double b, c, d;

    scanf("%s", a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    d = b + (0.15 * c);

    printf("TOTAL = R$ %.2lf\n", d);

    return 0;
}
