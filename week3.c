#include <stdint.h>
#include <stdio.h>


int main(void){

    //1 - ������ sizeof�� �̿��� ����Ʈ ũ���� Ȯ��
    // int8_t ch=9;
	// int32_t inum=1052;
	// int32_t dnum=3.1415;	 
    // printf("���� ch�� ũ��: %d\n", sizeof(ch));
    // printf("���� inum�� ũ��: %d\n", sizeof(inum));
    // printf("���� dnum�� ũ��: %d\n", sizeof(dnum));

	// printf("char�� ũ��: %d \n", sizeof(char));
	// printf("int�� ũ��: %d \n", sizeof(int));
	// printf("long�� ũ��: %d \n", sizeof(long));
	// printf("long long�� ũ��: %d \n", sizeof(long long));
	// printf("float�� ũ��: %d \n", sizeof(float));
	// printf("double�� ũ��: %d \n", sizeof(double));


    // //2 - ������ ǥ�� �� ó���� ���� �Ϲ��� �ڷ��� ����
    // char num1=1, num2=2, result1=0;
	// short num3=300, num4=400, result2=0;

	// printf("size of num1 & num2: %d, %d \n", sizeof(num1), sizeof(num2));
	// printf("size of num3 & num4: %d, %d \n", sizeof(num3), sizeof(num4));

	// printf("size of char add: %d \n", sizeof(num1+num2));
	// printf("size of short add: %d \n", sizeof(num3+num4));

	// result1=num1+num2;
	// result2=num3+num4;
	// printf("size of result1 & result2: %d, %d \n", sizeof(result1), sizeof(result2));


    //3 - �Ǽ��� ǥ�� �� ó���� ���� �Ϲ��� �ڷ��� ����
    // double rad;
    // double area;
    // printf("���� ������ �Է�: ");
    // scanf("%lf", &rad);
    // area = rad * rad * 3.1415;
    // printf("���� ����: %f \n", area);


    //4 - ������ ǥ��
    // char ch1 ='A', ch2 =65;
    // int ch3 = 'Z', ch4 =90;
    // printf("%c %d \n", ch1, ch1);
    // printf("%c %d \n", ch2, ch2); 
    // printf("%c %d \n", ch3, ch3);
    // printf("%c %d \n", ch4, ch4);


    //5 - �ڵ� �� ��ȯ�� ����
    // double num1 = 245;
    // int num2 = 3.1415;
    // int num3 = 129;
    // char ch= num3;

    // printf("���� 245�� �Ǽ���: %f\n", num1);
    // printf("�Ǽ� 3.1415�� ������: %d\n", num2);
    // printf("ū ���� 129�� ���� ������: %d\n", ch);


    //6 - ����� �� ��ȯ: ������ ����Ű�� �� ��ȯ
    // int num1=3, num2 =4;
    // double divResult;
    // divResult = (double) num1 / num2; // (double)�߰��� ������ ��ȯ
    // printf("������ ���: %f\n", divResult);

    //7 - printf �Լ��� ���������� ���Ĺ��ڵ�
    // int myAge=12;
    // printf("�� ���̴� 10������ %d��, 16������ %x���Դϴ�.\n", myAge, myAge);


    //8 - %g�� �Ǽ���°� %s�� ���ڿ� ��� - ������ ��� ����
	// double d1=1.23e-3;    // 0.00123
	// double d2=1.23e-4;    // 0.000123
	// double d3=1.23e-5;    // 0.0000123
	// double d4=1.23e-6;    // 0.00000123
	
	// printf("%g \n", d1);    // 0.00123 ���
	// printf("%g \n", d2);    // 0.000123 ���
	// printf("%g \n", d3);    // 1.23E-005 ���
	// printf("%g \n", d4);    // 1.23E-006 ���


    //9 - �ʵ� ���� �����Ͽ� ������ ��� ���̱�
    // printf("%-8s %20s %15s \n", "��  ��", "�����а�", "�г�");
	// printf("%-8s %20s %15d \n", "�赿��", "���ڰ���", 3);
	// printf("%-8s %20s %15d \n", "������", "��ǻ�Ͱ���", 2);
    // printf("%-8s %20s %15d \n", "�Ѽ���", "�̼�������", 4);

    // printf("%8.2f\n", 15.9029444f);
    // printf("%8.2f\n", 2223.01f);


    //10 - ���� ����� �Է����� �����ϱ�
    // int num1, num2, num3;
    // printf("�� ���� ���� �Է�: ");
    // scanf("%d %o %x", &num1, &num2, &num3); //scanf ���ڴ� &������ 10,8,16���� ���·� ������ �Է�
    // printf("�Էµ� ���� 10���� ���: ");
    // printf("%d %d %d\n", num1, num2, num3); //printf ���ڴ� ������


    //11 - �Ǽ� ����� �Է����� �����ϱ�
    float num1;
    double num2;
    printf("�Ǽ� �Է�1(e ǥ�������): ");
    scanf("%f", &num1);
    printf("�Էµ� �Ǽ� %f\n", num1);

    printf("�Ǽ� �Է�2(e ǥ�������): ");
    scanf("%lf", &num2);
    printf("�Էµ� �Ǽ� %f\n", num2);

	return 0;
}