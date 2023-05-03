#include<stdio.h>
#include<string.h>

struct movies
{
    char name[2];
    int points;
};

int main() {

    struct movies action[2];
    {
        strcpy(action[0].name,"John wick");
        action[1].points = 5;
    };
    
    printf("%s got %d out of 5.",action[0].name,action[1].points);

    return 0;
}
