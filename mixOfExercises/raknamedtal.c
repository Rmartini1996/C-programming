#include <stdio.h>

int main (int argc, const char * argv[]){
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(int);
    int element = length;
    printf("du har %d element\n", element);
    float total, medelvärde;
    int i;

    for(i = 0; i < length ; i++){
        total += array[i];
    }
    medelvärde = total / length;
printf("ditt medelvärde är %.1f\n", medelvärde);
    return 0;
}