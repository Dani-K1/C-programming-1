#include <stdio.h>

int main(void){
    int num1,num2;
    printf("Input two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("10 & 15 = %d\n", num1&num2); 
    //비트단위 AND (같은거반환, 0/1있을시 0만 반환)
    printf("10 | 15 = %d\n", num1|num2);
    //비트단위 OR (같은거반환, 0/1있을시 1만 반환)
    printf("10 ^ 15 = %d\n", num1^num2);
    //비트단위 XOR (같으면 0반환, 다르면 1반환)


    return 0;
}