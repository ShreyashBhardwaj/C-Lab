#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int a, b, c;
    printf("Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    printf("GCD of %d, %d and %d is %d\n", a, b, c, gcd(gcd(a, b), c));
}