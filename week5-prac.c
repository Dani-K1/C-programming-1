#include <stdio.h>

int main(){
    //�������� 8 - 1
    // for(int i=1; i<100; i++){

    //     if(i%7==0 || i%9==0){
    //         printf("%d ",i);
    //     }
    
    // }    


    //�������� 8 - 2
    // int num1,num2;
    // printf("�ΰ��� ���� �Է�: ");
    // scanf("%d %d", &num1, &num2);
    // if(num1>num2){
    //     printf("%d \n", num1 -num2);
    // }else if( num2>num1){
    //     printf("%d \n", num2 -num1);
    // }


    //�������� 8 - 4
    // int num1,num2;
    // printf("�ΰ��� ���� �Է�: ");
    // scanf("%d %d", &num1, &num2);

    // printf("%d", (num1>num2)? (num1 -num2):(num2 -num1));


    //�������� 8 - 3
    // int s1,s2,s3;
    // double result;
    // char grade;
    // printf("����, ����, ���� ������ ���� �Է�: ");
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


    //�������� 8/2 - 1 : �����ܹ���
    //��� 1
    // int i,j;
    // for(i=2; i<10; i+=2){//¦�� �ܸ�
    //     for(j=1; j<=i; j++){ //�ش� ���ڱ����� ���ϱ�
    //         printf("%d X %d = %d\n", i,j,i*j);
    //     }
    //     printf("\n");
    // }
    //��� 2 
    // for(int i=2; i<10; i++){ //��
    //     if(i%2 != 0){
    //         continue;
    //     }
    //     for(int j=1; j<10; j++){ //���ϱ�
    //         if(i<j){
    //             break;
    //         }
    //         printf("%d X %d = %d\n", i,j,i*j);
    //     }
    //     printf("\n");
    // }


    //������ �����
    // int cur =2;
    // int is =0;
    // while(cur<10){ //2�ܺ��� 9�ܱ��� �ݺ�
    //     is =1; //���ο� ���� ������ ���ؼ�
    //     while(is <10){ //�� ���� 1���� 9�� ���� ǥ��
    //         printf("%d X %d = %d\n", cur, is, cur*is);
    //         is++;
    //     }
    //     cur++; //���� ������ �Ѿ�� ���� ����
    //     printf("\n");
    // }


    //�������� 8/2 - 2 : ���ؼ� 99�� �Ǵ� ����� ��
    int A,Z,result ;
    for(A=0; A<10; A++){ //0-9
        for(Z=0; Z<10; Z++){ //0-9
            if(A==Z){
                continue; //�ߺ� �Ѿ��
            }
            result = (A *10 + Z )+ (Z*10 +A);
            if(result == 99){
                printf("%d%d + %d%d = %d\n", A,Z,Z,A,result);
            }
        }
    }


    //�������� 8/3
    int n;
    printf("n�� �Է�: ");
    scanf("%d", &n);

    switch (n/10)
    {
    case 0:
        printf("%d, 0�̻� 10�̸�", n);
        break;
    case 1:
        printf("%d, 10�̻� 20�̸�", n);
        break;
    case 2:
        printf("%d, 20�̻� 30�̸�", n);
        break;
    default:
        printf("%d, 30�̻�", n);
        break;
    }


    return 0;
}