#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

double integral(int n, float a, float b, double (*f)(double)) {
    double h = (b - a) / n;
    double val = h * (f(a) + f(b)) / 2;

    for(int i=1;i<=n;i++)
        val += h * f(a+i*h);

    return val;
}

int main() {
    double (*funkcije[])(double) = {sin, cos, tan, atan, acos, asin, exp};
    char *imena[] = {"sin", "cos", "tan", "atan", "acos", "asin", "exp"};

    printf("Unesite ime funkcije, n, a i b:\n");
    char ime[50];
    int n;
    float a, b;

    scanf("%s%d%f%f", ime, &n, &a, &b);

    for(int i=0;i<7;i++)
        if(strcmp(ime, imena[i]) == 0) 
            printf("%lf", integral(n, a, b, funkcije[i]));

    return 0;
}