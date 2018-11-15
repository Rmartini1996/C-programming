#include <stdio.h>
#include <math.h>

float hypotenuse(int a,int b){
    float answer, pyth;
    pyth  = (pow(a,2)+pow(b,2));
    answer =  sqrt(pyth);
    return answer;
}
int main(){
    int side1, side2;
    float answer;


    printf("Give me one of the legs: ");
    scanf("%d", &side1);
    printf("Give me the other leg: ");
    scanf("%d", &side2);
   
    answer = hypotenuse(side1, side2);
    printf("The hypotenuse of ur triangle is: %f \n", answer);


    return 0;
}