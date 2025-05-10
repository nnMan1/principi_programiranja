#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int uporedi(char *a, char *b) {
    int i = 0;
    while(a[i] != '\0' && b[i] != '\0') {
        if(a[i] != b[i])
            return 0;
        i++;
    }

    if(a[i] != '\0' || b[i] != '\0')
        return 0;

    return 1;
}

int samo_cifre(char * s) {
    int i = 0;
    while(s[i] != '\0') {
        if(!isdigit(s[i]))
            return 0;
        i++;
    }

    return 1;
}

void pretvori_u_velika(char *s) {
    int i = 0;
    while(s[i] != '\0') {
        s[i] = toupper(s[i]);
        i++;
    }
}

int main() {
    char s[] = "Ma1r.k?o\n";
    
    int i = 0;
    while(s[i] != '\0') {
        printf("isdigit(%c) = %d\n", s[i], isdigit(s[i]));
        printf("isalpha(%c) = %d\n", s[i], isalpha(s[i]));
        printf("isalnum(%c) = %d\n", s[i], isalnum(s[i]));
        printf("isupper(%c) = %d\n", s[i], isupper(s[i]));
        printf("islower(%c) = %d\n", s[i], islower(s[i]));
        printf("isspace(%c) = %d\n", s[i], isspace(s[i]));
        
        printf("----------------\n");
        i++;
    }

    pretvori_u_velika(s);
    printf("s = %s\n", s);
}