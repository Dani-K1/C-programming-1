#include <stdio.h>

int balanceLeft = 1000000;

void deposit(unsigned int money);
void withdraw(unsigned int money);
void check_balance();

void deposit(unsigned int money){
    int deposit;
    balanceLeft = money;
    printf("�Ա��� �ݾ��� �Է��ϼ���: ");
    scanf("%d", &deposit);
    balanceLeft += deposit;
    printf("�Ա��� �Ϸ� �Ǿ����ϴ�.\n");
    printf("���� �ܰ�� %d���Դϴ�.\n",balanceLeft);
}
void withdraw(unsigned int money){
    int withdraw;
    balanceLeft = money;
    printf("����� �ݾ��� �Է��ϼ���: ");
    scanf("%d", &withdraw);
    balanceLeft -= withdraw;
    if(balanceLeft <0){
        printf("�ܾ��� �����մϴ�.\n");
        balanceLeft += withdraw;
        printf("���� �ܰ�� %d���Դϴ�.\n",balanceLeft);
        return;
    }
    printf("����� �Ϸ� �Ǿ����ϴ�.\n");
    printf("���� �ܰ�� %d���Դϴ�.\n",balanceLeft);
}
void check_balance(){
    printf("���� �ܰ�� %d���Դϴ�.\n",balanceLeft);
}

int main(){
    int n;
    int check = 0;
    printf("=====�������� ATM���Դϴ�.=====\n");
    while(check == 0){
    
    printf("1. �Ա�\n");
    printf("2. ���\n");
    printf("3. �ܾ� ��ȸ\n");
    printf("4. ����\n");
    printf("���ϴ� �۾� ��ȣ�� �����ϼ���: ");
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
        printf("�ȳ��� ������.\n");
        check = 1;
        break;
    default:
        printf("�ùٸ� �۾� ��ȣ�� �����ϼ���.\n");
        break;
    }
    
    }
    return 0;
}