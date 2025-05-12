#include  <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fout = fopen("fajlovi/imena.txt", "w");

    if(fout == NULL) {
        fprintf(stderr, "Nije moguce otvoriti fjal imena.txt za pisanje.\n");
        exit(1);
    }

    char student1[50] = "Tanja Boskovic";
    fprintf(fout, "Imena studenata su: \n%s\n", student1);

    fputs("Marko Petrovic\n", fout);
    fputs("Ana Mihajlovic\n", fout);
    fputc('B', fout);
    fflush(fout);

    printf("Pokusavamo da otovorimo datoteku imena.txt\n");
    FILE *fin = fopen("fajlovi/imena.txt", "r+");

    if(fin == NULL) {
        fprintf(stderr, "Nije moguce otvoriti fjal imena.txt za citanje.\n");
        exit(1);
    }

    // char red[100];
    // do {
    //     fgets(red, 100, fin);
    //     printf("%s", red);
    // } while(!feof(fin));

    // char c;
    // while((c = fgetc(fin)) != EOF) {
    //     printf("%c", c);
    // }

    int br = 0;
    char linija[100];
    while(fscanf(fin, "%[^\n]\n", linija) != EOF) {
        printf("%d: %s\n", br++, linija);
    }

    rewind(fin);
    while(fscanf(fin, "%[^\n]\n", linija) != EOF) {
        printf("%d: %s\n", br++, linija);
    }

    fprintf(fin, "Fajl uspjesno procitan\n");
    fflush(fin);

    // char ime[50];

    // fscanf(fin, "Imena studenata su: \n%[^\n]\n", ime);
    // // fscanf(fin, "Imena studenata su: \n%s", ime);
    // printf("%s\n", ime);

    // fgets(ime, 50, fin);
    // printf("%s", ime);

    // fgets(ime, 50, fin);
    // printf("%s", ime);

    // char c = fgetc(fin);
    // printf("%c\n", c);

    // // fclose(fout);
    // fclose(fin);

    return 0;
}