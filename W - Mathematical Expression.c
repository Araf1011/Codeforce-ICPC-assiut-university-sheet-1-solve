#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int A, B, C, result;
    char operator, sign;

    scanf("%d %c %d = %d", &A, &operator, &B, &C);

    if(operator == '+'){
        result = A + B;
    }
    else if(operator == '-'){
        result = A - B;
    }
    else if(operator == '*'){
        result = A * B;
    }
    if (result == C) {
        printf("Yes\n");
    } else {
        printf("%d\n", result);
    }
    return 0;
}
