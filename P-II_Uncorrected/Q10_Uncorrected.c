#include <stdio.h>

struct C
{
    int a;
    int b;
    char i="i";
};

void main()
{
    struct C num1, num2;
    
    printf("Re1");
    scanf("%d", &num1.a);
    printf("Im1");
    scanf("%d", &num1.b);
    
    printf("Re2");
    scanf("%d", &num2.a);
    printf("Im2");
    scanf("%d", &num2.b);
    
    printf("product: \n");
    printf("%d+%s%d", num1.a*num2.b-num1.b*num2.b, num1.i, num1.a*num2.b+num2.a*num1.b);
}