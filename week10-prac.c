#include <stdio.h>

int main(){
    //연습문제 12 - 1, 문제 1
    // int num =10;
    // int* ptr1 = &num;
    // int* ptr2 = ptr1;

    // (*ptr1)++;
    // (*ptr2)++;
    // printf("%d\n", num);

    //연습문제 12 - 1, 문제 2
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

    // //연습문제 13 - 1, 문제 1
    // int arr[5] ={1, 2,3,4,5};
    // int* ptr = arr;
    // for(int i=0; i<5; i++){
    //     *ptr +=2; //포인터변수ptr에 저장된 값을 증가시키는 형태
    //     ptr++;
    //     printf("%d\n", *(ptr+i));
    // }
    // //연습문제 13 - 1, 문제 2
    // for(int i=0; i<5; i++){
    //     // arr[i] += 2;
    //     *(ptr+i) +=2; //ptr을 대상으로 덧셈 연산을 하여, 그 결과로 반환되는 주소 값을 통해서 배열접근
    //     printf("%d\n", arr[i]);
    // }

    //연습문제 13 - 1, 문제 3
    // int array[5] = {1,2,3,4,5};
    // int* ptr = &array[4];
    // int sum=0;
    // for(int i=0; i<5; i++){
    //     sum += *(ptr--);
    // }
    // printf("%d", sum);

    //연습문제 13 - 1, 문제 4
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