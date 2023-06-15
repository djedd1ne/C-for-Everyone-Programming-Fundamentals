/*
    04/05/2023
    program : sine function
    coder : djeddine
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, res;

    printf("Enter a value betweeen 1 and 0\n");
    scanf("%lf", &x);
    res = sin(x);
    printf("sin(%lf) = %lf\n", x, res);
    return (0);
}