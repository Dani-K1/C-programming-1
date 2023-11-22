#include <stdio.h>
#include <math.h>

double standardDeviation(int array[5]){
    double total =0;
    for(int i=0; i<5; i++){
        total += array[i];
    }
    double mu = total / 5;
    total = 0;
    for(int i=0; i<5; i++){
        total += pow(array[i] - mu, 2); //¿Þ¦UÀÇ Á¦°ö½Â
    }
    return sqrt(total / 5); //·çÆ®¾º¿ì±â
}

int main(){
    int array[5];
    printf("Enter 5 real numbers: ");
    for(int i=0; i<5; i++){
        scanf("%d1", &array[i]);
    }
    printf("Standard Deviation = %.3f",standardDeviation(array));
    return 0;
}