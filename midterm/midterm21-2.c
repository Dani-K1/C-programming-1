#include <stdio.h>
#include <string.h>

//단기/서기 변환, 사칙연산, 사분면 계산, GS25 나만의냉장고
// (난이도 하 15점 1문제, 중 25점 2문제, 상 35점 1문제)

//사칙연산
//두개의 정수와 하나의 연산자 입력받아, 연산결과 출력
int calculate(int a, int b, char op){
    switch (op)
    {
    case '+': 
        return a+b; //리턴해서 브레이크 안해도됨
    case '-': 
        return a-b;
    case '*': 
        return a*b;
    case '/': 
        if (b != 0){
            return a/b;
        }
        else{
            printf("0으로 나눌 수 없습니다.\n");
            return -1;    
        }
    default:
        printf("유효하지 않은 연산자입니다.\n");
        return -1;
    }
}


//사분면 계산
//사용자로부터 x, y 좌표를 입력, 좌표가 위치한 사분면을 출력
int determineQuadrant(int x, int y){
    if(x>0 && y>0){
        return 1;
    } else if(x<0 && y>0){
        return 2;
    } else if(x<0 && y<0){
        return 3;
    } else if(x>0 && y<0){
        return 4;
    } else{
        return 5;
    }

}

//GS25 나만의냉장고
//사용자로부터 다양한 음료 이름과 가격을 입력받아
// 나만의 냉장고에 저장하고, 
//전체 음료 리스트와 총 가격을 출력하는 프로그램을 작성하십시오. 
//최대 5개의 음료만 저장 가능합니다.
void inputDrink(char drinks[][50], int prices[], int *total){
    for(int i=0; i<5; i++){
        printf("음료 이름을 입력하세요 (종료하려면 'end' 입력): ");
        scanf("%s", drinks[i]);
        if (strcmp(drinks[i], "end") == 0) {
            break;
        }
        printf("음료 가격을 입력하세요: ");
        scanf("%d", &prices[i]);
        *total += prices[i];
    }
}
void displayDrinks(char drinks[][50], int prices[], int total){
    printf("\n나만의 냉장고 음료 리스트:\n");
    for (int i = 0; i < 5 && strcmp(drinks[i], "end") != 0; i++) {
        printf("%s: %d원\n", drinks[i], prices[i]);
    }
    printf("\n총 가격: %d원\n", total);
}


int main(){

    //단기/서기 변환
    //서기(예: 2023)를 입력받아, 단기(예: 23)로 출력하는 프로그램
    int year;
    printf("서기 연도를 입력하세요: "); //2023
    scanf("%d", &year);

    printf("단기: %d\n", year % 100); //23


    //사칙연산
    int a,b,result;
    char op;
    printf("두 수와 연산자 입력(예: 5 + 3): ");
    scanf("%d %c %d", &a, &op, &b);

    result = calculate(a, b ,op);
    if(result != -1){
        printf("결과: %d\n", result);
    } else{
        printf("오류");
    }
    
    //사분면 계산
    int x,y,quadrant;

    printf("x, y 좌표를 입력: ");
    scanf("%d %d", &x, &y);

    quadrant = determineQuadrant(x, y);

    switch (quadrant)
    {
    case 1:
        printf("%d, %d = 1사분면\n", x, y);
        break;
    case 2:
        printf("%d, %d = 2사분면\n", x, y);
        break;
    case 3:
        printf("%d, %d = 3사분면\n", x, y);
        break;
    case 4:
        printf("%d, %d = 4사분면\n", x, y);
        break;
    case 5:
        printf("%d, %d = 좌표축 위에 위치\n", x, y);
        break;
    }

    //GS25 나만의냉장고
    char drinks[5][50];
    int prices[5];
    int total = 0;

    inputDrink(drinks, prices, &total);
    displayDrinks(drinks, prices, total);


    return 0;
}