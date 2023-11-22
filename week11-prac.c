#include <stdio.h>

//연습문제 14 - 1, 문제 1
// int SquareByValue(int num){
//     return num * num;
// }
// void SquareBypointer(int* ptr){
//     int num = *ptr;
//     *ptr = num*num;
// }
// int main(){
//     int num = 10;
//     printf("%d\n", SquareByValue(num));
//     SquareBypointer(&num);
//     printf("%d\n", num);
//     return 0;
// }

//연습문제 14 - 1, 문제 2
// void Swap3(int* num1, int* num2, int* num3){
//     //방법1
//     // int temp1 = *num1;
//     // int temp2 = *num2;
//     // *num1 = *num3;
//     // *num2 = temp1;
//     // *num3 = temp2;
//     //방법2
//     int temp = *num3;
//     *num3 = *num2;
//     *num2 = *num1;
//     *num1 = temp;
// }
// int main(){
//     int num1=1,num2=2,num3=3;
//     Swap3(&num1,&num2,&num3);
//     printf("%d %d %d", num1,num2,num3);
//     return 0;
// }

///연습문제 14 - 2, 문제 2
void ShowData(const int* ptr){ //const로 받아서 데이터를 바꿀수 없게 했지만
    //int* rptr = ptr;
    printf("%d ", *ptr);
    //*rptr = 20; //여기서 데이터를 바꾸려는 시도가 있어서 틀림.
}
int main(){
    int num = 10;
    int* ptr = &num;
    ShowData(ptr);
    return 0;
}
