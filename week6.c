#include <stdio.h>

int num;

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

void Add2(int val){
    num += val; //�������� num�� �� val��ŭ ����
}

int Add(int num1, int num2){
    return num1+num2;
}

void ShowAddResult(int num){
    printf("������� ���: %d\n", num);
}

int ReadNum(){
    int num;
    scanf("%d", &num);
    return num;
}

void HowToUseThisProg(){
    printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�.\n");
    printf("��! �׷� �ΰ��� ������ �Է��ϼ���!\n");
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
    //1 - �������� ��ȯ �� ��� �ִ� ���
    // int result = Add(3,4);
    // printf("�������1: %d\n", result);
    // result = Add(5,8);
    // printf("�������2: %d\n", result);
    
    //2 - �������ڳ� ��ȯ ���� �������� �ʴ� ���
    // int result, num1, num2;
    // HowToUseThisProg();
    // num1= ReadNum();
    // num2= ReadNum();
    // result=Add(num1,num2);
    // ShowAddResult(result);
    
    //3 - �پ��� ������ �Լ� ����
    // int num1, num2;
    // printf("�� ���� ���� �Է�: ");
    // scanf("%d %d", &num1, &num2);
    // printf("%d�� %d�� ������ ū ����: %d\n",
    //         num1, num2, AbsoCompare(num1,num2));
    
    // //4 - �Լ� ������ ���� �� ���� ������ ��������
    // int num=17;
    // simpleFuncOne();
    // simpleFuncTwo();
    // printf("main num: %d\n", num);

    //5 - ���������� ���ؿ� ������
    // printf("num: %d \n", num);
	// Add2(3);
	// printf("num: %d \n", num);
	// num++; // �������� num�� �� 1 ����
	// printf("num: %d \n", num);
    
    //6 - ���������� static ������ �߰��� static ����
    // for(int i=0; i<3; i++){
    //     SimpleFunc();
    // }

    //7 - ����Լ��� ������ ��� - ���丮�� �Լ�
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