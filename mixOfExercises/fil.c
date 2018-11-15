#include <stdio.h>  

int main(int argc, const char *argv[]){
    FILE * f;
    f = fopen("mintext.txt", "W");
    fprintf(f, "hej hej hallååååå");
   


    return 0;
}