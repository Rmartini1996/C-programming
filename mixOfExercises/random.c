#include <stdio.h> 
#include <stdlib.h> 
#include<time.h>

int main (int argc, const char*argv[]){
    int random, i;
    srand( time(NULL));

    for(i = 0; i < 10; i++){
        random = rand() % 10 + 1;
        printf("%d\n", random);


    }


    return 0;
}