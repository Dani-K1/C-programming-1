#include <stdio.h>

// 연습문제 22 - 1, 22 - 2
// struct employee
// {   char name[20];
//     char ssn[20];
//     int salary;
// };
// int main(){
//     struct employee arr[3];
//     for(int i=0; i<3; i++){
//         printf("이름, 주민번호, 급여입력: ");
//         scanf_s("%s", arr[i].name, sizeof(arr[i].name));
//         scanf_s("%s", arr[i].ssn, sizeof(arr[i].ssn));
//         scanf_s("%d", &arr[i].salary);
//     }
//     for(int i=0; i<3; i++){
//         printf("%s %s %d\n", arr[i].name, arr[i].ssn, arr[i].salary);
//     }
// }


// 연습문제 23 - 1
// typedef struct point
// {   int xpos;
//     int ypos;
// } Point;
// void SwapPoint(Point* ptr1, Point* ptr2){
//     Point temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
// }
// int main(){
//     Point pos1 ={2,4};
//     Point pos2 ={5,7};

//     SwapPoint(&pos1, &pos2);
//     printf("[%d, %d]\n", pos1.xpos, pos1.ypos);
//     printf("[%d, %d]\n", pos2.xpos, pos2.ypos);
//     return 0;
// }

// 연습문제 23 - 2
typedef struct point
{   int xpos;
    int ypos;
} Point;
typedef struct rectangle
{
    Point upLeft;
    Point downRight;
}Rectangle;
void PrintArea(Rectangle r){
    printf("Area : %d\n",
    (r.downRight.xpos - r.upLeft.xpos) * (r.downRight.ypos - r.upLeft.ypos));
}
void ShowDots(Rectangle r){
    printf("상좌, %d %d\n", r.upLeft.xpos, r.upLeft.ypos);
    printf("상우, %d %d\n", r.downRight.xpos, r.upLeft.ypos);
    printf("하좌, %d %d\n", r.upLeft.xpos, r.downRight.ypos);
    printf("하우, %d %d\n", r.downRight.xpos, r.downRight.ypos);
}

int main(){
    Rectangle rect ={{0,0},{100,100}};
    Rectangle rect2 = {{0,0}, {7,5}};
    PrintArea(rect);
    ShowDots(rect);
    PrintArea(rect2);
    ShowDots(rect2);
    return 0;

}

