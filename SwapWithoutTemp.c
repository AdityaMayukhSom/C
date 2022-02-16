#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    a = a - b;
    b = b + a;
    a = b - a;
    printf("The value of a after swapping is %d\n", a);
    printf("The value of b after swapping is %d\n", b);
    getch();
}