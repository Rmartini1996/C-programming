#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

int main(int argc, const char*argv[]){
int random, i, guess;
srand(time(NULL));
random = rand() % 100 + 1;

printf("Guess a number between 1 - 100: \n");
scanf("%d", &guess);

while (guess != random){
if (guess > random){
    printf("Number is too high!\n");
    i++;
}
else if (guess < random){
    printf("Number is too low!\n");
    i++;
}
scanf("%d", &guess);
}

i++;
printf("You guessed right! %d times of guessing loooooser\n", i);

    return 0;
}