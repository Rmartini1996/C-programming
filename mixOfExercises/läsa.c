#include <stdio.h>  

int main(int argc, const char *argv[]){
    FILE * f;
    f = fopen("mintext.txt", "r");
    char lines[300];

    while(!feof(f)){
        fgets(lines, 300,f);
        printf("%s", lines);      //kan använda puts(lines);
    }
   


    return 0;
}