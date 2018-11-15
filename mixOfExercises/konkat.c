#include <stdio.h>
#include <string.h>

int main (int argc, const char * argv[]){
    char name[30] = "Mitt namn är ";
    strcat(name, "Rex");
    printf("%s\n", name);

    return 0;
}