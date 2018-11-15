#include <stdio.h>

void minFunktion();

int main (int argc, const char *argv[]){

minFunktion();

    return 0;
}

void minFunktion(){
    int a, b, c;
    a = 1;
    b = 5;
    c = a * b;

    printf("detta är min funktion %d\n", c);

}