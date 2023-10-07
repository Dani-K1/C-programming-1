#include <stdio.h>

int main(){
    //연습문제 8 - 1
    // for(int i=1; i<100; i++){

    //     if(i%7==0 || i%9==0){
    //         printf("%d ",i);
    //     }
    
    // }    


    //연습문제 8 - 2
    // int num1,num2;
    // printf("두개의 정수 입력: ");
    // scanf("%d %d", &num1, &num2);
    // if(num1>num2){
    //     printf("%d \n", num1 -num2);
    // }else if( num2>num1){
    //     printf("%d \n", num2 -num1);
    // }


    //연습문제 8 - 4
    // int num1,num2;
    // printf("두개의 정수 입력: ");
    // scanf("%d %d", &num1, &num2);

    // printf("%d", (num1>num2)? (num1 -num2):(num2 -num1));


    //연습문제 8 - 3
    // int s1,s2,s3;
    // double result;
    // char grade;
    // printf("국어, 영어, 수학 순으로 점수 입력: ");
    // scanf("%d %d %d", &s1, &s2, &s3);
    // result = (s1 +s2+s3)/3;
    
    // if(result >=90){
    //     grade = 'A';
    //     printf("%.2lf %c", result, grade);
    // } else if( result >=80){
    //     grade = 'B';
    //     printf("%.2lf %c", result, grade);
    // } else if( result >=70){
    //     grade = 'C';
    //     printf("%.2lf %c", result, grade);
    // } else if( result >=50){
    //     grade = 'D';
    //     printf("%.2lf %c", result, grade);
    // } else{
    //     grade = 'F';
    //     printf("%.2lf %c", result, grade);
    // }


    //연습문제 8/2 - 1 : 구구단문제
    //방법 1
    // int i,j;
    // for(i=2; i<10; i+=2){//짝수 단만
    //     for(j=1; j<=i; j++){ //해당 숫자까지만 곱하기
    //         printf("%d X %d = %d\n", i,j,i*j);
    //     }
    //     printf("\n");
    // }
    //방법 2 
    // for(int i=2; i<10; i++){ //단
    //     if(i%2 != 0){
    //         continue;
    //     }
    //     for(int j=1; j<10; j++){ //곱하기
    //         if(i<j){
    //             break;
    //         }
    //         printf("%d X %d = %d\n", i,j,i*j);
    //     }
    //     printf("\n");
    // }


    //구구단 만들기
    // int cur =2;
    // int is =0;
    // while(cur<10){ //2단부터 9단까지 반복
    //     is =1; //새로운 단의 시작을 위해서
    //     while(is <10){ //각 단의 1부터 9의 곱을 표현
    //         printf("%d X %d = %d\n", cur, is, cur*is);
    //         is++;
    //     }
    //     cur++; //다음 단으로 넘어가지 위한 증가
    //     printf("\n");
    // }


    //연습문제 8/2 - 2 : 더해서 99가 되는 경우의 수
    int A,Z,result ;
    for(A=0; A<10; A++){ //0-9
        for(Z=0; Z<10; Z++){ //0-9
            if(A==Z){
                continue; //중복 넘어가기
            }
            result = (A *10 + Z )+ (Z*10 +A);
            if(result == 99){
                printf("%d%d + %d%d = %d\n", A,Z,Z,A,result);
            }
        }
    }


    //연습문제 8/3
    int n;
    printf("n을 입력: ");
    scanf("%d", &n);

    switch (n/10)
    {
    case 0:
        printf("%d, 0이상 10미만", n);
        break;
    case 1:
        printf("%d, 10이상 20미만", n);
        break;
    case 2:
        printf("%d, 20이상 30미만", n);
        break;
    default:
        printf("%d, 30이상", n);
        break;
    }


    return 0;
}