#include <stdio.h>
#include <stdlib.h>

void theBest(char *episodesInputFile, char *directorsInputFile, char *episodesOputputFile) {
    FILE *f_episodes = fopen(episodesInputFile, "r");
    if(f_episodes == NULL) {
        fprintf(stderr, "Nije moguce otvoriti fjal %s\n", episodesInputFile);
        exit(1);
    }

    FILE *f_directors = fopen(directorsInputFile, "r");
    if(f_directors == NULL) {
        fprintf(stderr, "Nije moguce otvoriti fjal %s\n", directorsInputFile);
        exit(1);
    }

    FILE *f_bestEpisode = fopen(episodesOputputFile, "w");
    if(f_bestEpisode == NULL) {
        fprintf(stderr, "Nije moguce otvoriti fjal %s\n", episodesOputputFile);
        exit(1);
    }

    char najgledanija[800];
    float max_br_gledalaca = 0;
    int rb_sezone;
    int rb_epizode;
    char epizoda[100];
    char reditelj[100];
    char scenaristi[200];
    float br_gledalaca;

    while(fscanf(f_episodes, "%d#%d#%[^#]#%[^#]#%[^#]#%f", &rb_sezone, &rb_epizode, epizoda, reditelj, scenaristi, &br_gledalaca) != EOF) {

        printf("Br sezone:%d\n", rb_sezone);
        printf("Br epizode:%d\n", rb_epizode);
        printf("Epizoda:%s\n", epizoda);
        printf("Reditelj:%s\n", reditelj);
        printf("Scenaristi:%s\n", scenaristi);
        printf("br gledalaca:%.2f\n", br_gledalaca);
        printf("##############################################\n");



        if(br_gledalaca > max_br_gledalaca) {
            max_br_gledalaca = br_gledalaca;
            sprintf(najgledanija, "%d#%d#%s#%s#%s#%f", rb_sezone, rb_epizode, epizoda, reditelj, scenaristi, br_gledalaca);
        }
    }

    fprintf(f_bestEpisode, "%s", najgledanija);

}

int main() {
    theBest("episodes.txt", "directors.txt", "bestEpisode.txt");
    return 0;
}