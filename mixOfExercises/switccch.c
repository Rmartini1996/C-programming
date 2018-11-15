#include <stdio.h>  

int main(int argc, const char *argv[]){
    int x = 2;

    switch(x){
        case 1 :
            printf("x = 1 \n");
            break;
        case 2 :
            printf("x = 2 \n");
            break;
        default :
            printf("inget alternativ fanns\n");  
            break;
    }

    return 0;
}