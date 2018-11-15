#include <stdio.h> 
#include <string.h> 
#define YES y
#define NO  n
#define KINDA k
#define Yes y
#define No  n
#define Kinda k
#define yes Y
#define no N
#define kinda K
//jätteskoj


int main(int argc, const char * argv[]){
    char option;
    char opinion[20];
    
    printf("Was this a good day (Yes/Kinda/No)?:  ");
    scanf("%c", &option);

    switch(option){
        case 'Y' :
        case 'y' : 
            printf("Okay we are thankful you liked it\n"); 
            break;
        case 'K' :
        case 'k' : 
            printf("Okay what could've been better?\n");
            getchar();
            scanf("%[^\n]s", opinion);
            printf("Thanks we will keep this in mind til next time! \n %s  \n ", opinion);
            break;
        case 'N' :
        case 'n' :  
            printf("Okay what could've been better?\n");
            getchar();
            scanf("%[^\n]s", opinion);
            printf("Thanks we will keep this in mind til next time! \n %s \n ", opinion);
            break;
        default : printf("I didnt understand ur answer\n"); break;
    }


    return 0;
}
