#include <stdio.h>

int main(){
    //1 - ������ ������ ũ��
    // int num =0;
    // int* x =&num;
    // printf("%zu", sizeof(x)); //8- x64, 4- x86;
    

    //2 - �����Ͱ� ����Ű�� �޸𸮸� �����ϴ� * ������
    // int num1=100, num2=100;
	// int * pnum;

	// pnum=&num1;    // ������ pnum�� num1�� ����Ŵ
	// (*pnum)+=30;     // num1+=30�� ���� - 130

	// pnum=&num2;     // ������ pnum�� num2�� ����Ŵ
	// (*pnum)-=30;     // num2-=30�� ���� - 70
	
	// printf("num1:%d, num2:%d \n", num1, num2);


    //3 - 1���� �迭 �̸��� ������ ��
    // int arr1[3]={1, 2, 3};
	// double arr2[3]={1.1, 2.2, 3.3};

	// printf("%d   %g\n", *arr1, *arr2);	
	// *arr1 += 100;
	// *arr2 += 120.5;
	// printf("%d   %g \n", arr1[0], arr2[0]);	


    //4 - �����͸� �迭�� �̸�ó�� ���
	// int arr[3]={15, 25, 35};
	// int * ptr= &arr[0];     // int * ptr=arr; �� ������ ���� 

    // arr[0] += 5;
    // arr[1] +=7;
    // arr[2] +=9;
	// printf("%d %d \n", ptr[0], arr[0]);
	// printf("%d %d \n", ptr[1], arr[1]);
	// printf("%d %d \n", ptr[2], arr[2]);
	// printf("%d %d \n", *ptr, *arr);

    //5 - �����͸� ������� �ϴ� ���� �� ���ҿ���
    int arr[3] ={11,22,33};
    int* ptr = arr;
    printf("%d %d %d\n", *ptr,*(ptr+1),*(ptr+2)); //11 22 33
    printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);
    printf("%d %d %d\n", *(arr+0), *(arr+1), *(arr+2));
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);

    printf("%d ", *ptr); ptr++; //11
    printf("%d ", *ptr); ptr++; //22
    printf("%d ", *ptr); ptr--; //33
    printf("%d ", *ptr); ptr--; //22
    printf("%d ", *ptr); ptr++; //11
    printf("\n");


    return 0;
}