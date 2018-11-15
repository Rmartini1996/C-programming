#include <stdio.h> 

int main  (int argc, const char *argv[]){
    int array[] = {3, 199, 4, 5};
    int element;

    element = sizeof(array) / sizeof(int);
    printf("%d\n", element);
    return 0;
}