#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int min(int c, int d)
{
    return c - d;
}
float divide(int e, int f)
{
    return e / f;
}
int mult(int g, int h)
{
    return g * h;
}
int main()
{
    int num1, num2, sum, sub, div, pro, op, i;
    do
    {
        printf("enter the two numbers needed to operate on: \n");
        scanf("%d%d", &num1, &num2);
        printf("input the operation you want to perform on the given numbers: 1-add,2-subtract,3-division,4-multiplication: \n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            sum = add(num1, num2);
            printf("sum=%d:", sum);
            break;

        case 2:
            sub = min(num1, num2);
            printf("sub=%d:", sub);
            break;

        case 3:
            div = divide(num1, num2);
            printf("division=%d: ", div);
            break;

        case 4:
            pro = mult(num1, num2);
            printf("product=%d: ", pro);
            break;
        }
        printf("To continue press 1: ");
        scanf("%d" , &i);
    } while (i == 1);
    printf("Thank you.....");
    return 0;
}