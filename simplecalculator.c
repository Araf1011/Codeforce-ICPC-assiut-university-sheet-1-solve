#include<stdio.h>
int main()
{
    long long int x,y;
    scanf("%lld %lld", &x, &y);

    long long int sum = x + y;
    long long int product = x * y;
    long long int difference = x - y;

    printf("%lld + %lld = %lld\n",x,y, sum );
    printf("%lld * %lld = %lld\n",x,y,product );
    printf("%lld - %lld = %lld\n",x,y,difference );

    return 0;
}
