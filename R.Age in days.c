#include<stdio.h>
int main()
{
    int days,month,year,days;
    scanf("%d",&days);
    year=days/365;
    month=(days%365)/30;
    days=((days%365)%30)/1;
    printf("%d years\n",year);
    printf("%d months\n",month);
    printf("%d days\n",days);
    return 0;
}