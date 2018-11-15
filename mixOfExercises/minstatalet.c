#include <stdio.h>  

int main (int argc, const char * argv[]){
    int array[9] = {10, 97, 1003, 400, 543, 2, 232, 44, 1};
    int minsta_tal, i;
    minsta_tal = array[0];

    for (i = 0; i <= 8; i++) {
       if (minsta_tal > array[i] ) {
           minsta_tal = array[i];

       }

    }
    printf("%d\n", minsta_tal);
    return 0;
}