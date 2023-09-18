#include <stdio.h>

int main(){
    // //3장
    // //문제3
    // int num1;
    // printf("하나의 정수 입력: ");
    // scanf("%d", &num1);
    // printf("%d의 제곱의 결과: %d \n",num1, num1*num1);

    // //문제4
    // int num2,num3;
    // printf("두 개의 정수 입력: ");
    // scanf("%d %d2", &num2, &num3);
    // printf("몫: %d, 나머지: %d \n", num2/num3, num2%num3);

    //문제5
    // int num1,num2,num3;
    // int result;
    // printf("세 개의 정수 입력: ");
    // scanf("%d %d %d", &num1, &num2, &num3);
    // result = (num1-num2) * (num2+num3) * (num3%num1);
    // printf("(num1-num2)*(num2+num3)*(num3%%num1) 연산결과: %d\n", result);
    // //%%두개 해야 잘나옴

    // //4장
    // //문제1
    // int num;
    // printf("정수 입력: ");
    // scanf("%d", &num);
    // num = ~num;
    // num = num +1;
    // printf("부호를 바꾼 결과: %d \n", num);

    //문제2
    int number =3;
    number = number<<3; //8의 곱
    number = number>>2; //4의 나누기
    //   3*8/4
    printf("%d \n", number); //6


    return 0;
}