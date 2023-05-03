#include<stdio.h>
#include<string.h>

struct movie {
        char name[10];
        int rating;
    };

int main() {
    struct movie m1;
    strcpy(m1.name,"John Wick 4");
    m1.rating = 5;
    printf("Name : %s\n",m1.name);
    printf("Rating(Total 5) : %d\n",m1.rating);
    return 0;
}