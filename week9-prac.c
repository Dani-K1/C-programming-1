#include <stdio.h>

int main(){
    //�������� 11 - 1, ���� 1
    // int array[5], sum=0, max, min;
    // for(int i=0; i<5; i++){
    //     printf("�����Է�[%d]: ",i);
    //     scanf("%d", &array[i]);
    //     sum += array[i];
    // }
    // max = min = array[0];

    // for(int j=1; j<5; j++){
    //     if(array[j] > max){
    //         max = array[j];
    //     }
    //     if(array[j]< min){
    //         min = array[j];
    //     }
    // }
    // printf("min: %d, max: %d, sum: %d",min,max,sum);

    //�������� 11 - 1, ���� 2
    // char arr[ ]= "Good time";
    // int size = sizeof(arr) / sizeof(char);
    // for(int i=0; i<size; i++){
    //     printf("%c", arr[i]);
    // }


    //�������� 11 - 2, ���� 1
    // char uno[100];
    // int i=0, sum;
    // printf("�ϳ��� ���ܾ� �Է�: ");
    // scanf("%s",uno);
    // while(uno[i] != '\0'){
    //     sum++;
    //     i++;
    // }
    // printf("���ڿ��� ����: %d\n", sum);


    //�������� 11 - 2, ���� 2 - ���ڿ� ������
    // int len=0; //length
    // char palabra[100], temp;
    // printf("�ϳ��� ���ܾ� �Է�: ");
    // scanf("%s",palabra);
    // while(palabra[len] != '\0'){
    //     len++; //length ����
    // }
    // for(int i=0;i<len/2;i++){ //size ���ڿ��ݱ�������
    //     temp = palabra[i]; //temp = s , �ӽ�����
    //     palabra[i] = palabra[len-1-i]; //s�ڸ� = e
    //     palabra[len-1-i] = temp; //e�ڸ� = s
    // }
    // printf("������ ���ڿ�: %s\n", palabra);


    //�������� 11 - 2, ���� 3
    // int size =0;
    // char voca[50], max, min;
    // printf("�ϳ��� ���ܾ� �Է�: ");
    // scanf("%s",voca);

    // max = voca[0];
    // while(voca[size] != 0){
    //     size++;
    // }
    // for(int j=1; j<size; j++){
    //     if(voca[j] > max){
    //         max = voca[j];
    //     }
    // }
    // printf("�ִ�: %c", max);
    

    //�������� 16 - 1, ���� 1
    // int arr[3][9], n=2; //����9,����3
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<9; j++){
    //         arr[i][j] = (i+2) * (j+1);
    //     }
    // }
    // for(int i=0; i<3;i++){
    //     for(int j=0;j<9;j++){
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }  

    //�������� 16 - 1, ���� 2
    // int arrA[2][4] ={
    //     {1,2,3,4},
    //     {5,6,7,8}
    // };
    // int arrB[4][2];
    // for(int i=0; i<2;i++){
    //     for(int j=0;j<4;j++){
    //         arrB[j][i] = arrA[i][j];
    //     }
    // }  
    // for(int i=0; i<4;i++){
    //     for(int j=0;j<2;j++){
    //         printf("%d ", arrB[i][j]);
    //     }
    //     printf("\n");
    // }  


    //�������� 16 - 1, ���� 3
    int scores[4][4];
    int studentTotal[4] = {0};
    int subjectTotal[4] = {0};
    int grandTotal =0;
    char* students[] = {"ö��", "ö��", "����", "����"};
    char* subjects[] = {"����", "����", "����", "����"};

    for(int i=0; i<4; i++ ){
        printf("%s�� ���� �Է�:\n", students[i]);
        for(int j=0; j<4; j++){
            printf("%s: ", subjects[j]);
            scanf("%d", &scores[i][j]);
            studentTotal[i] += scores[i][j]; //�л��� �������
            subjectTotal[j] += scores[i][j]; //���� �������
            grandTotal += scores[i][j];
        }
    }

    printf("����ǥ\n");
    printf("�л�\\���� ���� ���� ���� ���� ����\n");
    for(int i=0; i<4; i++){
        printf("%s      ", students[i]);
        for(int j=0; j<4; j++){
            printf("%3d  ", scores[i][j]);
        }
        printf(" %3d\n", studentTotal[i]);
    }
    printf("����      ");
    for(int j=0; j<4; j++){
        printf("%3d  ", subjectTotal[j]);
    }
    printf(" %3d\n",grandTotal);



    return 0;
}