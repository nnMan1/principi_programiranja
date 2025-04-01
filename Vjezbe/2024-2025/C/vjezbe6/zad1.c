#include <stdio.h>
#include <stdlib.h>

float compute_value(int n, float *poly, int x) {
    float v = 0;
    float s = 1;

    for(int i=0;i<=n;i++) {
        v += s * poly[i];
        s *= x;
    }

    return v;
}

int main() {
    int n;
    scanf("%d", &n);

    float poly[n+1];

    for(int i=0;i<=n;i++) {
        printf("a[%d] = ", i);
        scanf("%f", &poly[i]);
    }

    int k;
    scanf("%d", &k);

    float p, q;
    scanf("%f%f", &p, &q);

    for(int i=0;i<k;i++) {
        float x = p + (q-p) / (k-1) * i;

        printf("p(%f) = %f\n", x, compute_value(n, poly, x));
    }
}