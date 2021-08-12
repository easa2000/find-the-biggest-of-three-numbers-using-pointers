// find biggest of three numbers using pointers
#include<stdio.h>
int greater(int *a, int *b, int *c, int *large);
void main()
{
    int num1, num2, num3, large;
    printf("\n Enter a first number: ");
    scanf("%d",&num1);
    printf("\n Enter a Second number: ");
    scanf("%d",&num2);
    printf("\n Enter a third number: ");
    scanf("%d",&num3);
    greater(&num1, &num2, &num3, &large);
}
int greater(int *a, int *b, int *c, int *large)
{
    if(*a > *b && *a > *c)
    *large = *a;
    if(*b > *a && *b > *c)
    *large = *b;
    else
    *large = *c;

    printf("\n Largest number = %d",*large);  
}
