#include<stdio.h>

struct team{
    int pos;
    char Driver1[10];
    char Driver2[10];
    int pts;
};

void printinfo(struct team a) {
    printf("about ferrari :\n POS : %d\n Drives : %s and %s\n PTS : %d\n",a.pos,a.Driver1,a.Driver2,a.pts);
}

int main() {
    struct team ferrari = {4,"Charles","Carlos",26}; //Way to initiallize structures.
    struct team aston_martin = {2,"Fernando","Lance",65};//Follow the order of entering as a good coding practice
    struct team mercedes = {3,"Lewis","George",56};
    struct team redbull = {1,"Max","Sergio",123};

    //pointers
    struct team *ferrariptr = &ferrari;
    struct team *aston_martinptr = &aston_martin;
    struct team *mercedesptr = &mercedes;
    struct team *redbullptr = &redbull;

    printinfo(ferrari);//This here is call by value, at a time 2 struct would be in system as a copy is being passed 😀

    //printf("about ferrari : POS : %d, Drives : %s and %s, PTS : %d\n",(*ferrariptr).pos,(*ferrariptr).Driver1,(*ferrariptr).Driver2,ferrariptr->pts);
    //IMPORTANT: Remember the pos of brackets for ptr ops, it is specific, other combinations of bracket pos
    //would produce error or different results.
    //Or could use arrow operator instead like (*ferrariptr).pos <--> ferrariptr->pos 
    return 0;
}

