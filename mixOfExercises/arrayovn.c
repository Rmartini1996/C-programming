#include <stdio.h>
#define ANTAL 8

int main (){
    int min_array[ANTAL] = {10, 230, 333, 4200, 700, 4343, 222, 66};
    int i;
  
    printf("Innehållet i arrayen:\n------------------------------------\n");
    for(i = 0; i < ANTAL; i++){
        
        printf("Plats %d - %d \n", i, min_array[i]);

    }

    return 0;
}