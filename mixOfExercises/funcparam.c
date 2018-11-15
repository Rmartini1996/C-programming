#include <stdio.h>

void makestars(int stars);

int main(int argc, const char * argv[]) {
    int myint = 30;
    makestars(myint);
    return 0;
}

void makestars(int stars) {
    int i;
    for (i = 1; i <= stars; i++){
        printf("*\n");
    }
}
