#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double sqr(double x) {
    return x * x;
}

int compare(char *s1, char *s2) {
    int i=0;
    while(s1[i] != '\0' && s2[i] != '\0') {
        if(s1[i] != s2[i])
            return 0;

        i++;
    }

    if(s1[i] != '\0')
        return 0;
    
    if(s2[i] != '\0')
        return 0;

    return 1;
}

void equidistant(double a, double b, int n, double (*f)(double)) {
    for(int i=0;i<n;i++) {
        double x = a + (b-a) / (n - 1) * i;
        printf("%lf ", f(x));
    }
}

int main() {

    double (*functions[])(double) = {sin, cos, tan, atan , acos, asin , 
                                     exp, log, log10, sqrt, floor, ceil, sqr};
    char *function_names[] = {"sin", "cos", "tan", "atan" , "acos", "asin" , 
                              "exp", "log", "log10", "sqrt", "floor", "ceil", 
                              "sqr"};    

    char *f_name = malloc(sizeof(10));
    printf("Unesite ime funkcije: ");
    scanf("%s", f_name);

    double a, b;
    printf("Unesite krajeve intervala: ");
    scanf("%lf%lf", &a,  &b);

    int n;
    printf("Unesite broj tacaka: ");
    scanf("%d", &n);

    for(int i=0;i<13;i++) 
        if(compare(function_names[i], f_name)) {
            equidistant(a, b, n, functions[i]);
        }

    free(f_name);

    return 0;
}