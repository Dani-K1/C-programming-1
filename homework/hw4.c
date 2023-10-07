#include <stdio.h>

int main(){
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);

    if (n <= 1){
        printf("It is not a prime number.");
        return 0;
    }
    for(int i=2; i*i <= n; i++){
        if(n %i ==0){
            printf("It is not a prime number.");
            return 0;
        }
    }

    printf("It is a prime number.");

    return 0;
}