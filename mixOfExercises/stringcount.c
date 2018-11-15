#include <stdio.h>
#define TOTAL 30

int myStrLen(char *s){
int total = 0;
char *point;
point = &s[0];
while( *point != '\0'){
    total++;
    point++;
}

    return total;
}

int main(){
    char string[TOTAL];
    int length;

    printf("Write a string: \n");
    gets(string);

    length = myStrLen(string);

    printf("The string length was: %d \n", length);

    return 0;
}