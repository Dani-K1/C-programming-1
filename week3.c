#include <stdint.h>
#include <stdio.h>


int main(void){

    //1 - 연산자 sizeof를 이용한 바이트 크기의 확인
    // int8_t ch=9;
	// int32_t inum=1052;
	// int32_t dnum=3.1415;	 
    // printf("변수 ch의 크기: %d\n", sizeof(ch));
    // printf("변수 inum의 크기: %d\n", sizeof(inum));
    // printf("변수 dnum의 크기: %d\n", sizeof(dnum));

	// printf("char의 크기: %d \n", sizeof(char));
	// printf("int의 크기: %d \n", sizeof(int));
	// printf("long의 크기: %d \n", sizeof(long));
	// printf("long long의 크기: %d \n", sizeof(long long));
	// printf("float의 크기: %d \n", sizeof(float));
	// printf("double의 크기: %d \n", sizeof(double));


    // //2 - 정수의 표현 및 처리를 위한 일반적 자료형 선택
    // char num1=1, num2=2, result1=0;
	// short num3=300, num4=400, result2=0;

	// printf("size of num1 & num2: %d, %d \n", sizeof(num1), sizeof(num2));
	// printf("size of num3 & num4: %d, %d \n", sizeof(num3), sizeof(num4));

	// printf("size of char add: %d \n", sizeof(num1+num2));
	// printf("size of short add: %d \n", sizeof(num3+num4));

	// result1=num1+num2;
	// result2=num3+num4;
	// printf("size of result1 & result2: %d, %d \n", sizeof(result1), sizeof(result2));


    //3 - 실수의 표현 및 처리를 위한 일반적 자료형 선택
    // double rad;
    // double area;
    // printf("원의 반지름 입력: ");
    // scanf("%lf", &rad);
    // area = rad * rad * 3.1415;
    // printf("원의 넓이: %f \n", area);


    //4 - 문자의 표현
    // char ch1 ='A', ch2 =65;
    // int ch3 = 'Z', ch4 =90;
    // printf("%c %d \n", ch1, ch1);
    // printf("%c %d \n", ch2, ch2); 
    // printf("%c %d \n", ch3, ch3);
    // printf("%c %d \n", ch4, ch4);


    //5 - 자동 형 변환의 유형
    // double num1 = 245;
    // int num2 = 3.1415;
    // int num3 = 129;
    // char ch= num3;

    // printf("정수 245를 실수로: %f\n", num1);
    // printf("실수 3.1415를 정수로: %d\n", num2);
    // printf("큰 정수 129를 작은 정수로: %d\n", ch);


    //6 - 명시적 형 변환: 강제로 일으키는 형 변환
    // int num1=3, num2 =4;
    // double divResult;
    // divResult = (double) num1 / num2; // (double)추가로 실행결과 변환
    // printf("나눗셈 결과: %f\n", divResult);

    //7 - printf 함수의 서식지정과 서식문자들
    // int myAge=12;
    // printf("제 나이는 10진수로 %d살, 16진수로 %x살입니다.\n", myAge, myAge);


    //8 - %g의 실수출력과 %s의 문자열 출력 - 적절한 방식 선택
	// double d1=1.23e-3;    // 0.00123
	// double d2=1.23e-4;    // 0.000123
	// double d3=1.23e-5;    // 0.0000123
	// double d4=1.23e-6;    // 0.00000123
	
	// printf("%g \n", d1);    // 0.00123 출력
	// printf("%g \n", d2);    // 0.000123 출력
	// printf("%g \n", d3);    // 1.23E-005 출력
	// printf("%g \n", d4);    // 1.23E-006 출력


    //9 - 필드 폭을 지정하여 정돈된 출력 보이기
    // printf("%-8s %20s %15s \n", "이  름", "전공학과", "학년");
	// printf("%-8s %20s %15d \n", "김동수", "전자공학", 3);
	// printf("%-8s %20s %15d \n", "이을수", "컴퓨터공학", 2);
    // printf("%-8s %20s %15d \n", "한선영", "미술교육학", 4);

    // printf("%8.2f\n", 15.9029444f);
    // printf("%8.2f\n", 2223.01f);


    //10 - 정수 기반의 입력형태 정의하기
    // int num1, num2, num3;
    // printf("세 개의 정수 입력: ");
    // scanf("%d %o %x", &num1, &num2, &num3); //scanf 인자는 &변수명 10,8,16진수 형태로 데이터 입력
    // printf("입력된 정수 10진수 출력: ");
    // printf("%d %d %d\n", num1, num2, num3); //printf 인자는 변수명


    //11 - 실수 기반의 입력형태 정의하기
    float num1;
    double num2;
    printf("실수 입력1(e 표기법으로): ");
    scanf("%f", &num1);
    printf("입력된 실수 %f\n", num1);

    printf("실수 입력2(e 표기법으로): ");
    scanf("%lf", &num2);
    printf("입력된 실수 %f\n", num2);

	return 0;
}