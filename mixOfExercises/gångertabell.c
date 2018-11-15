#include <stdio.h>

int main (int argc, const char *argv[]) {
    int i, x, value;

    printf("Which multiplication table would u like to choose? \n");
    scanf("%d", &x);

    for (i = 0; i <= 50; i++){
        value = i * x;
        printf("%d * %d = %d\n", i, x, value);

    }

    return 0;
}
