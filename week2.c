#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main2(void){

    // //1 - 변수의 다양한 선언 및 초기화 방법
    // int num1=0, num2=0;
    // int num3=30, num4 =40;
    // printf("num1: %d, num2: %d\n", num1, num2);
    // num1 =10; num2=20;
    // printf("num1: %d, num2: %d\n", num1, num2);
    // printf("num3: %d, num4: %d\n", num3, num4);

    // //2 - 덧셈 프로그램의 완성
    // int num1 = 3;
    // int num2 =4;
    // int result = num1 +num2;
    // printf("덧셈 결과: %d \n", result);
    // printf("%d+%d = %d \n", num1,num2,result);
    // printf("%d와(과) %d의 합은 %d입니다. \n", num1,num2,result);

    // //3 - 대입 연산자와 산술 연산자
    // int num1 = 9, num2=2;
    // printf("%d + %d = %d \n", num1, num2, num1+num2);
    // printf("%d - %d = %d \n", num1, num2, num1-num2);
    // printf("%d X %d = %d \n", num1, num2, num1*num2);
    // printf("%d ÷ %d의 몫 = %d \n", num1, num2, num1/num2);
    // printf("%d ÷ %d의 나머지 = %d \n", num1, num2, num1%num2);

    //4 - 동일 연산자
    // int num1 = 2, num2=4, num3=6;
    // num1 +=3; //num1 = num1 +3 ;
    // num2 *=4; //num2 = num2 *4 ;
    // num3 %=5; //num3 = num3 %5 ;
    // printf("Result: %d, %d, %d\n", num1, num2, num3);
    // //Result: 5, 16, 1
    
    // //5 - 부호의 의미를 갖는 +, -
    // int num1 = +2;
    // int num2 = -4;
    // num1 = -num1;
    // printf("num1: %d\n", num1);
    // num2 = -num2;
    // printf("num2: %d\n", num2);

    // //6 - 증가, 감소 연산자
    // int num1 = 12, num2 = 12;
    // printf("num1: %d \n", num1);
    // printf("num1++: %d \n", num1++); //후위 증가 //12
    // printf("num1: %d \n", num1); //13
    // printf("num2: %d \n", num2);
    // printf("++num2: %d \n", ++num2); //전위 증가 //13
    // printf("num2: %d \n", num2); //13

    // //7 - 증가, 감소 연산자
    // int num1 = 10;
    // int num2 =(num1--)+2; //후위 감소
    // printf("num1: %d \n", num1); //9
    // printf("num2: %d \n", num2); //12

    //8 - 관계 연산자
    // int num1 =10, num2 = 12;
    // int result1, result2, result3;
    // result1 = (num1 == num2);
    // result2 = (num1<= num2);
    // result3 = (num1>num2);
    // printf("result1: %d \n", result1); //0 - faulse
    // printf("result2: %d \n", result2); //1 - true
    // printf("result3: %d \n", result3); //0 - faulse

    // //9 - 논리 연산자
    // int num1 =10, num2 = 12;
    // int result1, result2, result3;
    // result1 = (num1==10 && num2==12);
    // result2 = (num1<12 || num2>12);
    // result3 = (!num1); // num1 은 0이 아니어서 참 -> not 이니까 거짓으로 바꿈.
    // printf("result1: %d \n", result1); //1 - true
    // printf("result2: %d \n", result2); //1 - true
    // printf("result3: %d \n", result3); //0 - faulse

    // //10 - scanf 함수의 호출
    // int result, num1, num2;
    // printf("정수 one: ");
    // scanf("%d", &num1); //첫번째 정수 입력 //주소에 값을 넣어라!
    // printf("정수 two: ");
    // //scanf("%d", &num2); //두번째 정수 입력
    // //result = num1+num2;
    // //printf("%d + %d = %d \n", num1, num2, result);

    // //11 - 8진수와 16진수를 이용한 데이터 표현
    // //0x -16진수, 0 - 8진수, 0b - 2진수
    // int num1 = 0xA7, num2 = 0x43; //167 ,67
    // int num3 = 032, num4 = 024; //26, 20

    // printf("0xA7의 10진수 정수 값: %d \n", num1);
    // printf("0x43의 10진수 정수 값: %d \n", num2);
    // printf(" 032의 10진수 정수 값: %d \n", num3);
    // printf(" 024의 10진수 정수 값: %d \n", num4);

    // printf("%d-%d=%d \n", num1, num2, num1-num2);
    // printf("%d+%d=%d \n", num3, num4, num3+num4);

    //12 - 실수 표현의 오차 확인하기
    int i; float num = 0.0;
    for(i=0; i<100; i++) num+= 0.1;
    printf("0.1을 100번 더한 결과: %f \n", num);
    
    return 0;
}

int main(){
    //비트단위 AND (같은거반환, 0/1있을시 0만 반환)
    int num1 = 15;        // 00000000 00000000 00000000 00001111
    int num2 = 20;        // 00000000 00000000 00000000 00010100
    int num3 = num1 & num2;
    printf("AND 연산의 결과: %d \n", num3); //4

    //비트단위 OR (같은거반환, 0/1있을시 1만 반환)
    num3 = num1 | num2;
    printf("OR 연산의 결과: %d \n", num3); //31

    //비트단위 XOR (같으면 0반환, 다르면 1반환)
    num3 = num1 ^ num2;
    printf("XOR 연산의 결과: %d \n", num3); //27

    //비트단위 NOT (0>1, 1>0으로 변환)
    num2 = ~num1; 
    printf("NOT 연산의 결과: %d \n", num2); //-16
    
    //비트의 왼쪽 이동
    int num =15;
    int result1 = num<<1; //왼쪾으로 1칸씩이동
    int result2 = num<<2; //왼쪾으로 2칸씩이동
    int result3 = num<<3; //왼쪾으로 3칸씩이동
    printf("1칸 이동 결과: %d \n", result1); //30
    printf("2칸 이동 결과: %d \n", result2); //60
    printf("3칸 이동 결과: %d \n", result3); //120

    //비트의 오른쪽 이동
    int num=-16;     // 11111111 11111111 11111111 11110000
    printf("2칸 오른쪽 이동 결과: %d \n", num>>2);
    printf("3칸 오른쪽 이동 결과: %d \n", num>>3);
    
    return 0;
}