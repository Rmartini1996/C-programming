#include <stdio.h>
#include <string.h>

void changel(char *string, char before, char after){
    int i;

    for (i=0; i<strlen(string); i++){
        if (string [i] == before){
            string [i] =  after;
        }
    }
    
}
int main(){
char string[30]= "today is a very beautiful day\n";
char before, after;

printf("Text before: %s \n", string);
printf("What letter would u like to change?\n");
scanf(" %c", &before);
printf("What letter do u want instead?\n");
scanf(" %c", &after);

changel(string, before, after);
printf("The final text is now: %s \n", string);

    return 0;
}