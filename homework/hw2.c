#include <stdio.h>

int main(){
    double km;
    printf("Please enter kilometers: "); //3.5253
    scanf("%lf", &km);
    double miles = km / 1.609;
    printf("%.1lf km is equal to %.1lf miles.", km, miles);
    
    return 0;
}