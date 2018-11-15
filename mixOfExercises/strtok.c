#include <stdio.h>
#include <string.h>


int main (){    
    char string1[]= "This.is#how u c.an* split?a&string";
    char delimiter[]= ".*#&?";
    char *result= NULL;

    result = strtok(string1, delimiter);
    while(result != NULL){
        printf("This is the split version of the string: %s \n", result);
        result = strtok(NULL, delimiter);
    }




    return 0;
}