#include <stdio.h>

int main(){
    //1 - ����� 1���� �迭�� ����
    // int arr[5];
	// int sum=0, i;

	// arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;

	// for(i=0; i<5; i++){
    //     sum += arr[i];
    // }
    // printf("�迭��ҿ� ����� ���� ��: %d\n", sum);

    //2 - 1���� �迭�� ����, �ʱ�ȭ �� ���� ���� ����
    // int arr1[5]={1,2,3,4,5};
    // int arr2[ ]={1,2,3,4,5,6,7};
    // int arr3[5]={1,2};
    // int ar1Len, ar2Len, ar3Len, i;

    // printf("�迭 arr1�� ũ��:%d\n", sizeof(arr1)); //�迭�� ����Ʈ ũ������ ��ȯ
    // printf("�迭 arr2�� ũ��:%d\n", sizeof(arr2));
    // printf("�迭 arr3�� ũ��:%d\n", sizeof(arr3));

    // ar1Len = sizeof(arr1) / sizeof(int); //�迭 arr1�� ���� ���
    // ar2Len = sizeof(arr2) / sizeof(int);
    // ar3Len = sizeof(arr3) / sizeof(int);

    // for(i=0; i<ar1Len; i++){
    //     printf("%d ", arr1[i]);
    // }
    // printf("\n");


    // for(i=0; i<ar2Len; i++){
    //     printf("%d ", arr2[i]);
    // }
    // printf("\n");

    
    // for(i=0; i<ar3Len; i++){
    //     printf("%d ", arr3[i]);
    // }
    // printf("\n");


    //3 - char�� �迭�� ���ڿ� ����� �� ����
    // char str[]="Good morning!";
    // printf("�迭 str�� ũ��: %d \n", sizeof(str));
    // printf("�� ���� ������ ���: %c\n", str[13]); //�ƹ��͵� ��� �ȵ�
    // printf("�� ���� ������ ���: %d\n", str[13]); // 0

    // str[12]='?';
    // str[5] = 'M';
    // printf("���ڿ� ���: %s\n",str);
    
    
    //4 - scanf �Լ��� �̿��� ���ڿ��� �Է�
    // char str[50];
    // int idx=0;
    // printf("���ڿ� �Է�: ");
    // scanf("%s", str);
    // printf("�Է� ���� ���ڿ�: %s\n", str); //&�� �ʿ䰡����.

    // printf("���� ������ ���: ");
    // while(str[idx] != '\0'){
    //     printf("%c", str[idx]);
    //     idx++;
    // }
    // printf("\n");


    //5 - 2���� �迭��� ���ٰ��� ����
    // int villa[4][2];
    // int popu,i,j;
    // //������ �����ο� �Է� �ޱ�
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<2; j++){
    //         printf("%d�� %dȣ �α���: ", i+1, j+1);
    //         scanf("%d", &villa[i][j]);
    //     }
    // }
    // //������ ���� �α��� ����ϱ�
    // for(i=0; i<4; i++){
    //     popu =0;
    //     popu +=villa[i][0];
    //     popu +=villa[i][1];
    //     printf("%d�� �α���: %d\n", i+1, popu);
    // }


    //6 - 2���� �迭�� �޸𸮻� �Ҵ��� ���� - �������ּ����
    // int arr[3][2];
    // for(int i=0; i<3;i++){
    //     for(int j=0; j<2; j++){
    //         printf("%p \n", &arr[i][j]);
    //     }
    // }

    //7 - 2���� �迭 ����� ���ÿ� �ʱ�ȭ �ϱ�
    // int i,j;
    // int arr1[3][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };
    // int arr2[3][3] = {
    //     {1},
    //     {4,5},
    //     {7,8,9}
    // };
    // int arr3[3][3] = {1,2,3,4,5,6,7};
    // for(i=0; i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d ", arr1[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    // for(i=0; i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d ", arr2[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    // for(i=0; i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d ", arr3[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");   


    //8 - 3���� �迭�� ����� ����
    int mean =0, i, j;
    int record[3][3][2] = {
        {
            {70,80}, //A�б� �л�1�� ����
            {94,90}, //A�б� �л�2�� ����
            {70,85}  //A�б� �л�3�� ����
        },
        {
            {83,90},  //B�б� �л�1�� ����
            {95,60},
            {90,82}
        },
        {
            {98,89},
            {99,94},
            {91,87}
        },
    };

    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            mean += record[0][i][j];
        }
    }
    printf("A �б� ��ü ���: %g \n", (double)mean/6);

    mean=0;
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            mean += record[1][i][j];
        }
    }
    printf("B �б� ��ü ���: %g \n", (double)mean/6);
    
    mean=0;
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            mean += record[2][i][j];
        }
    }
    printf("C �б� ��ü ���: %g \n", (double)mean/6);
 

    return 0;
}