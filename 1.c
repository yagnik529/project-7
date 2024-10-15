#include <stdio.h>
int add(int a, int b)
{
    int ans = a + b;
    printf("%d", ans);
}

int sub(int a, int b)
{
    int ans = a - b;
    printf("%d", ans);
}
int mul(int a, int b)
{
    int ans = a * b;
    printf("%d", ans);
}
float div(int a, int b)
{
    float ans = a / b;
    printf("%f", ans);
}
void main()
{
    int n;
    printf("1 + \n");
    printf("2 - \n");
    printf("3 * \n");
    printf("4 / \n");
    printf("5 leave \n");
    printf("enter choice:- \n");
    scanf("%d", &n);

    while (n != 5)
    {
        int n1, n2;
        printf("enter first number:-\n");
        scanf("%d", &n1);
        printf("enter second number:-\n");
        scanf("%d", &n2);
        switch (n)
        {
        case 1:
            add(n1, n2);
            break;
        case 2:
            sub(n1, n2);
            break;
        case 3:
            mul(n1, n2);
            break;
        case 4:
            div(n1, n2);
            break;
        case 5:
            printf("you are now exit");
        }
        printf("enter choice:- \n");
        scanf("%d", &n);
    }
}
