#include <stdio.h>
int main(){
  
    char string[30]= "Jacob ater bananer";
    char *charpekare;
    int  *intpekare;

    charpekare = &string[0];
    printf("Texten skrivs ut med en charpekare: \n");

    while(charpekare != '\0'){
        printf("%c", *charpekare);
        charpekare++;
    }    

intpekare = &string[0];

    printf("Texten skrivs ut med en intpekare: \n");

    while(intpekare != '\0'){
        printf("%c", *intpekare);
        intpekare++;
    }




    return 0;
}