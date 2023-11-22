#include <stdio.h>

// int main(){
//     //1 - 두 가지 형태의 문자열 표현
//     // char str1[] = "My String";
//     // char* str2 = "Your String";
//     // printf("%s %s \n", str1, str2); //My String Your String

//     // str2= "Our String";
//     // printf("%s %s \n", str1, str2);//My String Our String
    
//     // str1[0]='X'; //변경 성공
//     // //str2[0]='X'; //변경 실패
//     // printf("%s %s \n", str1,str2);//Xy String Our String
    
//     //2 - 포인터 배열의 이해
//     // int num1=10,num2=20,num3=30;
//     // int* arr[3] = {&num1, &num2, &num3};

//     // printf("%d \n", *arr[0]); //arr[0] = 주소
//     // printf("%d \n", *arr[1]);
//     // printf("%d \n", *arr[2]);

//     //3 - 문자열을 저장하는 포인터 배열
//     // char* strArr[3] ={"Simple", "String", "Array"};
//     // printf("%s \n", strArr[0]);
//     // printf("%s \n", strArr[1]);
//     // printf("%s \n", strArr[2]);

//     return 0;
// }

//4 - 배열의 함수의 인자로 전달하는 예제
// void ShowArayElem(int param[], int len){//(int* param, int len)
//     for(int i=0; i<len; i++){
//         printf("%d ", param[i]);
//     }
//     printf("\n");
// }
// void AddArayElem(int param[], int len, int add){//(int* param, int len, int add)
//     for(int i=0; i<len; i++){
//         param[i] += add;
//     }
// }
// int main(){
//     int arr[3] ={1,2,3};
//     AddArayElem(arr, sizeof(arr)/sizeof(int),1);
//     ShowArayElem(arr, sizeof(arr)/sizeof(int));

//     AddArayElem(arr, sizeof(arr)/sizeof(int),2);
//     ShowArayElem(arr, sizeof(arr)/sizeof(int));
    
//     AddArayElem(arr, sizeof(arr)/sizeof(int),3);
//     ShowArayElem(arr, sizeof(arr)/sizeof(int));

//     return 0;
// }

//5 - 잘못 적용된 Call by value
// void Swap(int n1, int n2){
//     int temp =n1;
//     n1=n2;
//     n2=temp;
//     printf("n1 n2: %d %d\n",n1,n2);
// }
// int main(){
//     int num1=10;
//     int num2=20;
//     printf("num1 num2: %d %d\n", num1, num2);

//     Swap(num1, num2);
//     printf("num1 num2: %d %d\n", num1, num2);
//     return 0;
// }

//6 - 제대로 적용된 call-by-value(call-by-printer)
// void Swap(int* ptr1, int* ptr2){
//     int temp = *ptr1;
//     *ptr1 =*ptr2;
//     *ptr2 = temp;
// }
// int main(){
//     int num1=10,num2=20;
//     printf("num1 num2: %d %d\n", num1,num2);
//     Swap(&num1,&num2);
//     printf("num1 num2: %d %d\n", num1,num2);
//     return 0;
// }