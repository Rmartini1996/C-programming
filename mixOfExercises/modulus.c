#include <stdio.h>

int main(int argc, const char *argv[]){
    int Tal;
    printf("Säg ett tal: \n");
    scanf("%d", &Tal);

    if(Tal % 2 ==0){
        printf("Talet är jämnt\n");
    }
    else {
        printf("Talet är udda\n");
    }

    return 0;
}