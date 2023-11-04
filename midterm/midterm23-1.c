#include <stdio.h>

int balanceLeft = 1000000;

void deposit(unsigned int money);
void withdraw(unsigned int money);
void check_balance();

void deposit(unsigned int money){
    int deposit;
    balanceLeft = money;
    printf("입금할 금액을 입력하세요: ");
    scanf("%d", &deposit);
    balanceLeft += deposit;
    printf("입금이 완료 되었습니다.\n");
    printf("현재 잔고는 %d원입니다.\n",balanceLeft);
}
void withdraw(unsigned int money){
    int withdraw;
    balanceLeft = money;
    printf("출금할 금액을 입력하세요: ");
    scanf("%d", &withdraw);
    balanceLeft -= withdraw;
    if(balanceLeft <0){
        printf("잔액이 부족합니다.\n");
        balanceLeft += withdraw;
        printf("현재 잔고는 %d원입니다.\n",balanceLeft);
        return;
    }
    printf("출금이 완료 되었습니다.\n");
    printf("현재 잔고는 %d원입니다.\n",balanceLeft);
}
void check_balance(){
    printf("현재 잔고는 %d원입니다.\n",balanceLeft);
}

int main(){
    int n;
    int check = 0;
    printf("=====ㅅㅁ은행 ATM기입니다.=====\n");
    while(check == 0){
    
    printf("1. 입금\n");
    printf("2. 출금\n");
    printf("3. 잔액 조회\n");
    printf("4. 종료\n");
    printf("원하는 작업 번호를 선택하세요: ");
    scanf("%d", &n);
    

    switch (n)
    {
    case 1:
        deposit(balanceLeft);
        break;
    case 2:
        withdraw(balanceLeft);
        break;
    case 3:
        check_balance();
        break;
    case 4:
        printf("안녕히 가세요.\n");
        check = 1;
        break;
    default:
        printf("올바른 작업 번호를 선택하세요.\n");
        break;
    }
    
    }
    return 0;
}