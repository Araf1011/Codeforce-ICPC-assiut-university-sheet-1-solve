#include<stdio.h>
int main()
{
    int x;
    long long y;
    char ch[100];
    float f;
    double d;

    scanf("%d", &x);
    scanf("%lld", &y);
    scanf("%s", &ch);
    scanf("%f", &f);
    scanf("%lf", &d);


    printf("%d\n",x);
    printf("%lld\n",y);
    printf("%s\n",ch);
    printf("%.2f\n",f);
    printf("%.1f\n",d);

    return 0;
}
