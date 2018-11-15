#include <stdio.h>

long long fakultet(int n);

int main (int argc, char*argv[]){
    long long return_value;
    return_value = fakultet(30);
    printf("%llu\n", return_value);



    return 0;
}
long long fakultet(int n){
    if(n >= 1){
        return n * fakultet(n - 1 );
    }
else {
    return 1;
}
}