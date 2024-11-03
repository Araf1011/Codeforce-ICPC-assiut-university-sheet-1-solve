#include<stdio.h>
int main ()
{
    int a,b,result;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    switch(c)
    {
    case'+':
        result=a+b;
        printf("%d",result);
        break;
    case'-':
        result=a-b;
        printf("%d",result);
        break;
    case'*':
        result=a*b;
        printf("%d",result);
        break;
    case'/':
        result=a/b;
        printf("%d",result);
        break;
    }
    return 0;
}