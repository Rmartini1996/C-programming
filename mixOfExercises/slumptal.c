#include <stdio.h>
#include <limits.h>
#define max 10
#define abs_maxtal 1000


int main(){
    int i, tal;
    for(i = 0; i < max; i++){
        tal = rand() % abs_maxtal;
        printf("Nu slumpades tal: %d \n", tal);
    }




    return 0;
}