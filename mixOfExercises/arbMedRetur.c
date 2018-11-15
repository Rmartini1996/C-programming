#include <stdio.h> 

int min_funktion();

int main (int argc, const char *argv[]){
   int return_value;
   return_value = min_funktion(70, 10);
   printf("%d\n", return_value);

    return 0;
}

int min_funktion(int x, int y){
    int total;
    total = x * y;


    return total;
}