#include <stdio.h>

void bubble(int vekt[], int size){
int temp=0, i;
int swap;
do{
    swap=0;
    for(i=0; i<size-1; i++){
        if(vekt[i]    > vekt[i+1]){
            temp      = vekt[i];
            vekt[i]   = vekt[i+1];
            vekt[i+1] = temp;
            swap=1;
        }
    }
}while(swap!=0);
}

void sokfunktion(int vekt[], int sok, int size){
int low, mid, high;
low  = 0;
high = (size - 1);
mid  = (size/2);
int ejklar = 0;

do{
    if(sok == vekt[mid]){
        printf("Talet %d är funnet på plats %d\n", sok, (mid+1));
        break;
    }else if(sok > vekt[mid]){
        low = (mid + 1);
        mid =((high + low)/2);
    }else if(sok < vekt[mid]){
        high = mid - 1;
        mid  = (high/2);
    }else{
        printf("Tal %d finns ej i vektorn\n", sok);
        break;
    }


}while(ejklar == 0);
}


int main(){
int vekt[10] = {3,4,10,100,5,66,3349,88,192,999};
int sok = 0;
int size = (sizeof(vekt)/4);

bubble(vekt, size);
for(int i=0; i<size; i++){
    printf("%d\n",vekt[i]);
}

printf("Sök efter: ");
scanf("%d", &sok);

sokfunktion(vekt, sok, size);


return 0;
}
