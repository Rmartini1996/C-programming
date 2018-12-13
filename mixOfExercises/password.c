#include <stdio.h>
#include <ctype.h>

int main(){
char password[20];
int i, A=0, B=0, C=0, D=0;
int length;

printf("Enter password length:");
scanf(" %d",  &length);
printf("Enter password:");
scanf(" %s", password);

    for(i=0; i < length; i++){
        if((isalpha(password[i])) != 0){
            A++;
            if(isupper(password[i])){
            B++;
            }
        }
        if(isdigit(password[i])){
            C++;
        }
        if(password[i] == '$'){
            D++;
        }
    }
    printf("Password contains %d letter%c\n", A,(          (A>1)? 's':" "));
    printf("Password contains %d uppercase letter%c\n", B,((B>1)? 's':" "));
    printf("Password contains %d digit%c\n", C,(           (C>1)? 's':" "));
    printf("Password contains %d $-sign%c\n", D,(          (D>1)? 's':" "));
if( (A>= 1 && B>=1) && (C>=1 && D>=1)){
    printf("Your password is bulletproof!\n");
}
else if((A>= 1 && B>=1) || (C>=1 && D>=1)){
    printf("Your password is good!\n");
}
else if((A>= 1 || B>=1) || (C>=1 || D>=1)){
    printf("Your password needs to improve!\n");
}else{
    printf("Your password sucks!\n");
}


return 0;
}
