#include <stdio.h>

int main(){
    //�������� 12 - 1, ���� 1
    // int num =10;
    // int* ptr1 = &num;
    // int* ptr2 = ptr1;

    // (*ptr1)++;
    // (*ptr2)++;
    // printf("%d\n", num);

    //�������� 12 - 1, ���� 2
    // int num1 =10, num2=20;
    // int* ptr1 =&num1;
    // int* ptr2 = &num2;
    // int* temp;

    // (*ptr1) += 10; //20
    // (*ptr2) -=10; //10

    // temp = ptr1;
    // ptr1 = ptr2;
    // ptr2 = temp;
    // printf("ptr1 = %d, ptr2 = %d", *ptr1, *ptr2);

    // //�������� 13 - 1, ���� 1
    // int arr[5] ={1, 2,3,4,5};
    // int* ptr = arr;
    // for(int i=0; i<5; i++){
    //     *ptr +=2; //�����ͺ���ptr�� ����� ���� ������Ű�� ����
    //     ptr++;
    //     printf("%d\n", *(ptr+i));
    // }
    // //�������� 13 - 1, ���� 2
    // for(int i=0; i<5; i++){
    //     // arr[i] += 2;
    //     *(ptr+i) +=2; //ptr�� ������� ���� ������ �Ͽ�, �� ����� ��ȯ�Ǵ� �ּ� ���� ���ؼ� �迭����
    //     printf("%d\n", arr[i]);
    // }

    //�������� 13 - 1, ���� 3
    // int array[5] = {1,2,3,4,5};
    // int* ptr = &array[4];
    // int sum=0;
    // for(int i=0; i<5; i++){
    //     sum += *(ptr--);
    // }
    // printf("%d", sum);

    //�������� 13 - 1, ���� 4
    int arr[6] = {1,2,3,4,5,6};
    int* fptr = arr; //=&arr[0];
    int* bptr = &arr[5];
    int temp;
    for(int i=0; i<3; i++){
        temp = *fptr;
        *fptr = *bptr;
        *bptr = temp;
        fptr++;
        bptr--;
    }
    for(int i=0; i<6; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}