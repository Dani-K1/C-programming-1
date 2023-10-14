#include <stdio.h>

int num;

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

void Add2(int val){
    num += val; //전역변수 num의 값 val만큼 증가
}

int Add(int num1, int num2){
    return num1+num2;
}

void ShowAddResult(int num){
    printf("덧셈결과 출력: %d\n", num);
}

int ReadNum(){
    int num;
    scanf("%d", &num);
    return num;
}

void HowToUseThisProg(){
    printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다.\n");
    printf("자! 그럼 두개의 정수를 입력하세요!\n");
}

int simpleFuncOne(){
    int num=10;
    num++;
    printf("SimpleFuncOne num: %d\n", num);
    return 0;
}
int simpleFuncTwo(){
    int num1=20;
    int num2 =30;
    num1++, num2--;
    printf("num1 & num2: %d %d\n", num1, num2);
    return 0;
}

void SimpleFunc(){
    static int num1=0;
    int num2=0;
    num1++;
    num2++;
    printf("static: %d, local: %d \n", num1, num2);
}

int Factorial(int n){
    if(n ==0){
        return 1;
    }
    else{
        return n * Factorial(n-1);
    }
}

int main(){
    //1 - 전달인자 반환 값 모두 있는 경우
    // int result = Add(3,4);
    // printf("덧셈결과1: %d\n", result);
    // result = Add(5,8);
    // printf("덧셈결과2: %d\n", result);
    
    //2 - 전달인자나 반환 값이 존재하지 않는 경우
    // int result, num1, num2;
    // HowToUseThisProg();
    // num1= ReadNum();
    // num2= ReadNum();
    // result=Add(num1,num2);
    // ShowAddResult(result);
    
    //3 - 다양한 종류의 함수 정의
    // int num1, num2;
    // printf("두 개의 정수 입력: ");
    // scanf("%d %d", &num1, &num2);
    // printf("%d와 %d중 절댓값이 큰 정수: %d\n",
    //         num1, num2, AbsoCompare(num1,num2));
    
    // //4 - 함수 내에만 존재 및 접근 가능한 지역변수
    // int num=17;
    // simpleFuncOne();
    // simpleFuncTwo();
    // printf("main num: %d\n", num);

    //5 - 전역변수의 이해와 선언방법
    // printf("num: %d \n", num);
	// Add2(3);
	// printf("num: %d \n", num);
	// num++; // 전역변수 num의 값 1 증가
	// printf("num: %d \n", num);
    
    //6 - 지역변수에 static 선언을 추가한 static 변수
    // for(int i=0; i<3; i++){
    //     SimpleFunc();
    // }

    //7 - 재귀함수의 디자인 사례 - 팩토리얼 함수
    printf("1! = %d \n", Factorial(1));
    printf("2! = %d \n", Factorial(2));
    printf("3! = %d \n", Factorial(3));
    printf("4! = %d \n", Factorial(4));
    printf("9! = %d \n", Factorial(9));

    return 0;
}


int AbsoCompare(int num1, int num2){
    if(GetAbsoValue(num1)>GetAbsoValue(num2)){
        return num1;
    }
    else{
        return num2;
    }
}

int GetAbsoValue(int num){
    if(num<0){
        return num*(-1);
    }
    else{
        return num;
    }
}