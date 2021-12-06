#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, isprime = 1;
    scanf("%d", &n);
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isprime = 0;
            break;
        }
    }
    if (isprime)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);

    system("pause");
    return 0;
}