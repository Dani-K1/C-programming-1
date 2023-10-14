#include <stdio.h>

void decimalToBinary(int n){
    if(n ==0){
        return;
    }

    decimalToBinary(n /2);
    printf("%d", n%2);

}

int main(){
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    decimalToBinary(num);
    return 0;
}