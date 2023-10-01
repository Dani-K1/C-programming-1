#include <stdio.h>

int main(){
    //연습문제 7 - 1
    //문제 5
    // int num1, num2, i =0;
    // double total = 0.0;
    // printf("몇 개의 정수를 입력할 것입니까? ");
    // scanf("%d", &num1);

    // while(i<num1){
    //     printf("정수 입력: ");
    //     scanf("%d", &num2);
    //     total += num2;
    //     i++;
    // }
    // printf("평균: %f\n", total/num1);

    //연습문제 7 - 2
    //문제 1
    // int i =0,num=0,total =0;
    // while(i<5){
    //     while (num <=0)
    //     {
    //         printf("정수 입력: ");
    //         scanf("%d", &num);
    //     }
    //     total += num;
    //     num =0;
    //     i++;
    // }
    // printf("합계: %d\n", total);

    //연습문제 7 - 2
    //문제 2
    // int i=0,k =0;
    // while(i<5){
    //     while(k<i){
    //         printf("0");
    //         k++; //이게0을 프린트하는 수
    //     }
    //     k=0;
    //     printf("*\n");
    //     i++;
    // }

    //연습문제 7 - 3
    //문제 2
    // int A =2;
    // int sum=0;
    // do{
    //     sum +=A;
    //     A +=2;
    // }while (A<=100);
    // printf("0-100까지 짝수의 합은 : %d", sum);

    //연습문제 7 - 4
    //문제 2 - facotiral
    int i=0; 
    int num;
    int total=1;
    printf("정수를 하나 입력하세요 >>> ");
    scanf("%d", &num);//정수 입력

    for(i=1; i<=num; i++){
        total *= i;
    }
    printf("%d! =%d", num, total);
    

    return 0;
}