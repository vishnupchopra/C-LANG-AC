#include<stdio.h>

typedef struct team{
    int pos;
    char Driver1[10];
    char Driver2[10];
    int pts;
} teams ;

void printinfo(struct team a) {
    printf("About ferrari :\n POS : %d\n Drives : %s and %s\n PTS : %d\n",a.pos,a.Driver1,a.Driver2,a.pts);
}

int main() {
    teams ferrari = {4,"Charles","Carlos",26}; //Way to initiallize structures.
    teams aston_martin = {2,"Fernando","Lance",65};//Follow the order of entering as a good coding practice
    teams mercedes = {3,"Lewis","George",56};
    teams redbull = {1,"Max","Sergio",123};

    //pointers
    teams *ferrariptr = &ferrari;
    teams *aston_martinptr = &aston_martin;
    teams *mercedesptr = &mercedes;
    teams *redbullptr = &redbull;

    printinfo(ferrari);
    return 0;
}