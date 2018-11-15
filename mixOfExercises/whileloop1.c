#include <stdio.h>  

int main (int argc, const char* argv[]){
int i;
i = 1;

while (i <= 10) {
    printf("%d is \n", i);
    if ((i % 2) == 0) {
        printf("Even number\n");
    }
    else if ((i % 2) != 0) {
        printf("Odd number\n");
    }
    i ++;    
}
    return 0;
}
