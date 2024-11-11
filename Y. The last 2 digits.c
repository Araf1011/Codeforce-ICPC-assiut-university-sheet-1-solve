#include <stdio.h>

int main() {
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    long long result = (A % 100) * (B % 100) % 100;
    result = (result * (C % 100)) % 100;
    result = (result * (D % 100)) % 100;

    printf("%.2lld\n", result);
    return 0;
}
