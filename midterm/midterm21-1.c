#include <stdio.h>

//수학 함수, 화장실 자동 소등, 출결 공결처리, 베스킨라빈스31 결제
//(난이도 하 15점 1문제, 중 25점 2문제, 상 35점 1문제)

//수학 함수
void mathOperation(int a, int b){
    printf("합: %d\n", a+b);
    printf("차: %d\n", a-b);
    printf("곱: %d\n", a*b);
    printf("나누기: %d\n", a/b);
}

//화장실 자동 소등
//화장실에 사람이 없으면 5분 후에 자동으로 불이 꺼지는 시스템
//사람이 들어올 때와 나갈 때마다 센서가 감지,현재 화장실에 몇 명 카운트
//카운트가 0이 되면 5분 후에 불이 꺼집니다.
int counter =0;
void person_entered(){
    counter++;
    printf("현재 화장실 인원: %d\n", counter);
}
void person_left(){
    counter--;
    printf("현재 화장실 인원: %d\n", counter);
    if(counter ==0){
        printf("5분 후에 불이 꺼집니다.\n");
    }
}

//출결 공결처리
//학생은 출석, 결석, 공결 중 하나의 상태 가짐
//학생의 상태를 변경하는 함수와 현재 상태를 출력하는 함수
char *list[3] = {"출석", "결석", "공결"};
char *student_status;
// typedef enum { 출석, 결석, 공결 } Status;
// Status student_status;

void set_status(char *s) {
    student_status = s;
}

void print_status() {
    // switch (student_status) {
    //     case 출석:
    //         printf("학생의 상태: 출석\n");
    //         break;
    //     case 결석:
    //         printf("학생의 상태: 결석\n");
    //         break;
    //     case 공결:
    //         printf("학생의 상태: 공결\n");
    //         break;
    // }
    if (student_status == list[0]) {
        printf("학생의 상태: 출석\n");
    } else if (student_status == list[1]) {
        printf("학생의 상태: 결석\n");
    } else if (student_status == list[2]) {
        printf("학생의 상태: 공결\n");
    } else {
        printf("잘못된 상태입니다.\n");
    }
}

//베스킨라빈스31 결제
// 아이스크림 구매 시스템을 구현
//아이스크림 한 볼의 가격은 3000원.
//사용자로부터 몇 볼을 구매할 것인지 입력 받아 총 가격을 출력하는 함수를 작성하세요.
// 만약 사용자가 10볼 이상 구매하면 10%의 할인을 적용하세요.
int PRICE_PER_BALL = 3000; //한볼 가격

void calculate_price(int balls){
    int total = balls * PRICE_PER_BALL;
    if(balls >= 10){ //10볼 이상 구매, 10프로 할인
        total = total * 0.9;
    }
    printf("총 가격: %d원\n", total);
}


int main(){
    
    //수학 함수 테스트
    int a,b;
    printf("정수 두개 입력: ");
    scanf("%d %d", &a, &b);
    mathOperation(a,b);

    //화장실 자동 소등 테스트
    for(int i=0; i<3;i++){
        person_entered();
    }    
    for(int i=0; i<3;i++){
        person_left();
    }

    //출결 공결처리 test
    set_status(list[0]);
    print_status();
    set_status((list[1]));
    print_status();

    //베스킨라빈스31 결제 test
    printf("5개 구매: \n");
    calculate_price(5);
    printf("15개 구매: \n");
    calculate_price(15);

    
    return 0;
}