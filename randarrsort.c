#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
#define MAX_VALUE 901
#define SIZE 10

void printer(int seq[]){
    int i=0, row=1;
            do{
               if(row % SIZE == 0){
                printf("%4d\n", seq[i]);
               }
                else{
                printf("%4d", seq[i]);
                }
                i++;
                row++;
            }while(i < MAX);
}

void binarysearch(int seq[], int option, int search){
    int first, last, middle, row, column=0;
    first = 0;
    last = MAX - 1;
    middle = (first+last)/2;

    if(option==4){
        while (first <= last) {
            if (seq[middle] < search)
                first = middle + 1;    
            else if (seq[middle] == search) {
                 	row    = (middle / SIZE);
                    column = (middle % SIZE);
	                printf("%d was found on row %d and the %d column.\n", search, row+1, column+1);
                break;
      }
            else
                last = middle - 1;
                middle = (first + last)/2;
   }
            if (first > last)
                printf("%d was not found, try another number.\n", search);

    }
}

void calculations(int seq[], int option){
    float avg, sum=0, med;
    int i, maxim, minim;
    if(option == 3){
        for(i=0; i< MAX; i++){
            sum += seq[i];
        }
        avg   = sum / MAX;
        med   = (seq[(int)(MAX/2)] + seq[(int)((MAX/2)-1)]) / 2.0;
        minim = seq[0];
        maxim = seq[MAX-1];

        printf("Average: %.1f   \n", avg);
        printf("Median:  %.1f    \n", med);
        printf("Maximum: %d     \n", maxim);
        printf("Minimum: %d     \n", minim);
    }
}

void bubblesort(int seq[], int option){
    int i, temp, swapped, search=0;
    while(1){
        swapped = 0;
        for(i=0; i< MAX-1; i++){
            if(seq[i] > seq[i+1]){
                temp     = seq[i];
                seq[i]   = seq[i+1];
                seq[i+1] = temp;
                swapped  = 1;
            }
    }
        if(swapped == 0){
            break;
        }
    }
    calculations(seq, option);
    binarysearch(seq, option, search);
}

int generate(){
    int seq=0, i;
    for(i=0; i< MAX; i++){
    seq = rand() % MAX_VALUE;
    }
    return seq;
}

int menu(){
    int option;
    printf("Choose one of the following options:\n");
    printf("\"1\" Generate a random sequence.\n");
    printf("\"2\" Sort the sequence.\n");
    printf("\"3\" Print average, median, maximum and minmum value.\n");
    printf("\"4\" Binary search for any number.\n");
    printf("\"5\" Quit.\n");

    scanf("%d", &option);
    
    return option;
}

int main(){
    srand(time(NULL));
    int  option, i, search;
    int  seq[MAX];
    bool opt1 = false;
    bool opt2 = false;

    do{
        option = menu();

        switch(option){
        case 1:
                printf("Array is randomized.\n");
                for(i=0; i<MAX; i++){
                seq[i] = generate();
                }
                printer(seq);
                opt1 = true;
                break;
        case 2:
        if(opt1 == true){
                bubblesort(seq, option);
                printer(seq);
                opt2 = true;
        }else{printf("Generate a sequence before sorting it.\n");}
                break;
        case 3:
        if(opt1 == true && opt2 == true){
                calculations(seq, option);
        }else{printf("Generate a sequence first and sort it before calculating.\n");}
                break;
        case 4:
                printf("Search for number: ");
                scanf("%d", &search);
                binarysearch(seq, option, search);
        if(opt1 == true && opt2 == true){

        }else{printf("Generate a sequence first and sort it before searching for numbers.\n");}
                break;
        case 5:
                printf("Quiting...\n");
                break;
        default:
                 printf("Try again and select an avaible option.\n");
                break;
        }
    }while(option != 5);
    return 0;
}