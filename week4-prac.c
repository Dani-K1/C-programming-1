#include <stdio.h>

int main(){
    //�������� 7 - 1
    //���� 5
    // int num1, num2, i =0;
    // double total = 0.0;
    // printf("�� ���� ������ �Է��� ���Դϱ�? ");
    // scanf("%d", &num1);

    // while(i<num1){
    //     printf("���� �Է�: ");
    //     scanf("%d", &num2);
    //     total += num2;
    //     i++;
    // }
    // printf("���: %f\n", total/num1);

    //�������� 7 - 2
    //���� 1
    // int i =0,num=0,total =0;
    // while(i<5){
    //     while (num <=0)
    //     {
    //         printf("���� �Է�: ");
    //         scanf("%d", &num);
    //     }
    //     total += num;
    //     num =0;
    //     i++;
    // }
    // printf("�հ�: %d\n", total);

    //�������� 7 - 2
    //���� 2
    // int i=0,k =0;
    // while(i<5){
    //     while(k<i){
    //         printf("0");
    //         k++; //�̰�0�� ����Ʈ�ϴ� ��
    //     }
    //     k=0;
    //     printf("*\n");
    //     i++;
    // }

    //�������� 7 - 3
    //���� 2
    // int A =2;
    // int sum=0;
    // do{
    //     sum +=A;
    //     A +=2;
    // }while (A<=100);
    // printf("0-100���� ¦���� ���� : %d", sum);

    //�������� 7 - 4
    //���� 2 - facotiral
    int i=0; 
    int num;
    int total=1;
    printf("������ �ϳ� �Է��ϼ��� >>> ");
    scanf("%d", &num);//���� �Է�

    for(i=1; i<=num; i++){
        total *= i;
    }
    printf("%d! =%d", num, total);
    

    return 0;
}