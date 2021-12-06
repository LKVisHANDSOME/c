#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n, m;
    while (scanf("%lld %lld", &n, &m) != EOF) {
        printf("%lld\n", n >= m ? (n - m) : (m - n));
    }
    // system("pause");
    return 0;
}