#include<stdio.h>
#include<ctype.h>
int main()
{
    char al;//al=alphabet

    scanf("%c",&al);

    if(al>=65 && al<=90)//A=65 and Z=90
    {
        al=tolower(al);
        printf("%c\n",al);
    }
    else
    {
        al=toupper(al);
        printf("%c\n",al);
    }


}