#include <stdio.h>

int main (void)
{
    long long unsigned int res, a, b, c;
    scanf("%llu %llu %llu", &a, &b, &c);
    res |= a;
    res |= (b << 16);
    res |= (c << 32);
    printf("%llu\n", res);
    return 0;
}