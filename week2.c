#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main2(void){

    // //1 - ������ �پ��� ���� �� �ʱ�ȭ ���
    // int num1=0, num2=0;
    // int num3=30, num4 =40;
    // printf("num1: %d, num2: %d\n", num1, num2);
    // num1 =10; num2=20;
    // printf("num1: %d, num2: %d\n", num1, num2);
    // printf("num3: %d, num4: %d\n", num3, num4);

    // //2 - ���� ���α׷��� �ϼ�
    // int num1 = 3;
    // int num2 =4;
    // int result = num1 +num2;
    // printf("���� ���: %d \n", result);
    // printf("%d+%d = %d \n", num1,num2,result);
    // printf("%d��(��) %d�� ���� %d�Դϴ�. \n", num1,num2,result);

    // //3 - ���� �����ڿ� ��� ������
    // int num1 = 9, num2=2;
    // printf("%d + %d = %d \n", num1, num2, num1+num2);
    // printf("%d - %d = %d \n", num1, num2, num1-num2);
    // printf("%d X %d = %d \n", num1, num2, num1*num2);
    // printf("%d �� %d�� �� = %d \n", num1, num2, num1/num2);
    // printf("%d �� %d�� ������ = %d \n", num1, num2, num1%num2);

    //4 - ���� ������
    // int num1 = 2, num2=4, num3=6;
    // num1 +=3; //num1 = num1 +3 ;
    // num2 *=4; //num2 = num2 *4 ;
    // num3 %=5; //num3 = num3 %5 ;
    // printf("Result: %d, %d, %d\n", num1, num2, num3);
    // //Result: 5, 16, 1
    
    // //5 - ��ȣ�� �ǹ̸� ���� +, -
    // int num1 = +2;
    // int num2 = -4;
    // num1 = -num1;
    // printf("num1: %d\n", num1);
    // num2 = -num2;
    // printf("num2: %d\n", num2);

    // //6 - ����, ���� ������
    // int num1 = 12, num2 = 12;
    // printf("num1: %d \n", num1);
    // printf("num1++: %d \n", num1++); //���� ���� //12
    // printf("num1: %d \n", num1); //13
    // printf("num2: %d \n", num2);
    // printf("++num2: %d \n", ++num2); //���� ���� //13
    // printf("num2: %d \n", num2); //13

    // //7 - ����, ���� ������
    // int num1 = 10;
    // int num2 =(num1--)+2; //���� ����
    // printf("num1: %d \n", num1); //9
    // printf("num2: %d \n", num2); //12

    //8 - ���� ������
    // int num1 =10, num2 = 12;
    // int result1, result2, result3;
    // result1 = (num1 == num2);
    // result2 = (num1<= num2);
    // result3 = (num1>num2);
    // printf("result1: %d \n", result1); //0 - faulse
    // printf("result2: %d \n", result2); //1 - true
    // printf("result3: %d \n", result3); //0 - faulse

    // //9 - �� ������
    // int num1 =10, num2 = 12;
    // int result1, result2, result3;
    // result1 = (num1==10 && num2==12);
    // result2 = (num1<12 || num2>12);
    // result3 = (!num1); // num1 �� 0�� �ƴϾ �� -> not �̴ϱ� �������� �ٲ�.
    // printf("result1: %d \n", result1); //1 - true
    // printf("result2: %d \n", result2); //1 - true
    // printf("result3: %d \n", result3); //0 - faulse

    // //10 - scanf �Լ��� ȣ��
    // int result, num1, num2;
    // printf("���� one: ");
    // scanf("%d", &num1); //ù��° ���� �Է� //�ּҿ� ���� �־��!
    // printf("���� two: ");
    // //scanf("%d", &num2); //�ι�° ���� �Է�
    // //result = num1+num2;
    // //printf("%d + %d = %d \n", num1, num2, result);

    // //11 - 8������ 16������ �̿��� ������ ǥ��
    // //0x -16����, 0 - 8����, 0b - 2����
    // int num1 = 0xA7, num2 = 0x43; //167 ,67
    // int num3 = 032, num4 = 024; //26, 20

    // printf("0xA7�� 10���� ���� ��: %d \n", num1);
    // printf("0x43�� 10���� ���� ��: %d \n", num2);
    // printf(" 032�� 10���� ���� ��: %d \n", num3);
    // printf(" 024�� 10���� ���� ��: %d \n", num4);

    // printf("%d-%d=%d \n", num1, num2, num1-num2);
    // printf("%d+%d=%d \n", num3, num4, num3+num4);

    //12 - �Ǽ� ǥ���� ���� Ȯ���ϱ�
    int i; float num = 0.0;
    for(i=0; i<100; i++) num+= 0.1;
    printf("0.1�� 100�� ���� ���: %f \n", num);
    
    return 0;
}

int main(){
    //��Ʈ���� AND (�����Ź�ȯ, 0/1������ 0�� ��ȯ)
    int num1 = 15;        // 00000000 00000000 00000000 00001111
    int num2 = 20;        // 00000000 00000000 00000000 00010100
    int num3 = num1 & num2;
    printf("AND ������ ���: %d \n", num3); //4

    //��Ʈ���� OR (�����Ź�ȯ, 0/1������ 1�� ��ȯ)
    num3 = num1 | num2;
    printf("OR ������ ���: %d \n", num3); //31

    //��Ʈ���� XOR (������ 0��ȯ, �ٸ��� 1��ȯ)
    num3 = num1 ^ num2;
    printf("XOR ������ ���: %d \n", num3); //27

    //��Ʈ���� NOT (0>1, 1>0���� ��ȯ)
    num2 = ~num1; 
    printf("NOT ������ ���: %d \n", num2); //-16
    
    //��Ʈ�� ���� �̵�
    int num =15;
    int result1 = num<<1; //�ަU���� 1ĭ���̵�
    int result2 = num<<2; //�ަU���� 2ĭ���̵�
    int result3 = num<<3; //�ަU���� 3ĭ���̵�
    printf("1ĭ �̵� ���: %d \n", result1); //30
    printf("2ĭ �̵� ���: %d \n", result2); //60
    printf("3ĭ �̵� ���: %d \n", result3); //120

    //��Ʈ�� ������ �̵�
    int num=-16;     // 11111111 11111111 11111111 11110000
    printf("2ĭ ������ �̵� ���: %d \n", num>>2);
    printf("3ĭ ������ �̵� ���: %d \n", num>>3);
    
    return 0;
}