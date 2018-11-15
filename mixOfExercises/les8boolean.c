#include <stdio.h>
#include <stdbool.h>

int main (int argc, const char* argv[]) {
    bool haveMoney;
    bool wantCoffee;
    haveMoney = false;
    wantCoffee = false;

    if (haveMoney && wantCoffee){
printf("We will buy a coffee\n");
    }
else if (haveMoney || wantCoffee) {
printf("Maybe we will buy a coffee\n");
}
else if (!haveMoney && !wantCoffee){
printf("we wont buy a coffee\n");

}
    return 0;
}