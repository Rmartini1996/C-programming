#include <stdio.h>
#include <limits.h>
#include <locale.h>


int main (){
    setlocale ( LC_ALL, "swedish");
    unsigned char tecken;
    int i;

    for( tecken = 0; tecken < UCHAR_MAX; tecken++ ){

        printf("Tecken %d - %c  \n ", tecken, tecken);
    }



    return 0;
}