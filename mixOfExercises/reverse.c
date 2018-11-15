#include <stdio.h>
#include <string.h>
#define TOTAL 10

int main (int argc, const char *argv[]){
    char name[TOTAL];
    int i;
    printf("Write ur name: \n");
    scanf("%s", name);

    for(i = TOTAL - 1 ; i>=0; i--){

        printf("%c", name[i]);
        
    }

    return 0;
}