#include <stdio.h>
#include <math.h>

float count(){
    float numb;
    numb = (sqrt(25)*(2));
    return numb;
}
int main(){
    float answer;

    answer = count();
    printf("The answer is: %.2f \n", answer);
    return 0;
}