#include <stdio.h>  

int main (){
    int brutto, netto, s;
    printf("Tell me your salary: \n");
    scanf("%d", &brutto);

    

    if(brutto <= 200400){
        s = brutto * 0.7;
        printf("Your final salary after swedish taxes is: %d \n", s);
    }
    else {
        s = brutto * 0.5;
        printf("Your final salary after swedish taxes is: %10d \n", s);
    }

    return 0;
}