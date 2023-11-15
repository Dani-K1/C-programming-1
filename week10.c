#include <stdio.h>

int main(){
    //1 - 포인터 변수의 크기
    // int num =0;
    // int* x =&num;
    // printf("%zu", sizeof(x)); //8- x64, 4- x86;
    

    //2 - 포인터가 가리키는 메모리를 참조하는 * 연산자
    // int num1=100, num2=100;
	// int * pnum;

	// pnum=&num1;    // 포인터 pnum이 num1을 가리킴
	// (*pnum)+=30;     // num1+=30과 동일 - 130

	// pnum=&num2;     // 포인터 pnum이 num2를 가리킴
	// (*pnum)-=30;     // num2-=30과 동일 - 70
	
	// printf("num1:%d, num2:%d \n", num1, num2);


    //3 - 1차원 배열 이름의 포인터 형
    // int arr1[3]={1, 2, 3};
	// double arr2[3]={1.1, 2.2, 3.3};

	// printf("%d   %g\n", *arr1, *arr2);	
	// *arr1 += 100;
	// *arr2 += 120.5;
	// printf("%d   %g \n", arr1[0], arr2[0]);	


    //4 - 포인터를 배열의 이름처럼 사용
	// int arr[3]={15, 25, 35};
	// int * ptr= &arr[0];     // int * ptr=arr; 과 동일한 문장 

    // arr[0] += 5;
    // arr[1] +=7;
    // arr[2] +=9;
	// printf("%d %d \n", ptr[0], arr[0]);
	// printf("%d %d \n", ptr[1], arr[1]);
	// printf("%d %d \n", ptr[2], arr[2]);
	// printf("%d %d \n", *ptr, *arr);

    //5 - 포인터를 대상으로 하는 증가 및 감소연산
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