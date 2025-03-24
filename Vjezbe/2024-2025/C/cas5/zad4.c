#include <stdio.h>
#include <math.h>

int uporedi(char *s1, char *s2) {
    int i=0;

    while(s1[i] != '\0' && s2[i] != '\0') {
        if(s1[i] != s2[i])
                return 0;
        
        i++;
    }

    if(s1[i] != '\0' || s2[i] != '\0')
        return 0;

    return 1;
}

void izracunaj(int n, double l, double r, double (*f)(double)) {
    for(int i=0;i<n;i++) {
        double x = l + (r - l) / (n-1) * i;
        printf("%lf ", f(x));
    }
}

int main() {
    double (*funkcije[])(double) = {sin, cos, tan, atan, acos, asin, exp};
    char *imena[] = {"sin", "cos", "tan", "atan", "acos", "asin", "exp"};

    char f_str[10];
    scanf("%s", f_str); //ucitamo ime funkcije koju zelimo da izracunamo

    int idx = -1;

    for(int i=0;i<7;i++)
        if(uporedi(imena[i], f_str))
            idx = i;

    if(idx == -1) {
        printf("Pogresna funkcija\n");
        return 0;
    }

    double l, r;
    scanf("%lf%lf", &l, &r);

    int n;
    scanf("%d", &n);

    izracunaj(n, l, r, funkcije[idx]);

    return 0;
}