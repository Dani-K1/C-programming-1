#include <stdio.h>

//���� �Լ�, ȭ��� �ڵ� �ҵ�, ��� ����ó��, ����Ų���31 ����
//(���̵� �� 15�� 1����, �� 25�� 2����, �� 35�� 1����)

//���� �Լ�
void mathOperation(int a, int b){
    printf("��: %d\n", a+b);
    printf("��: %d\n", a-b);
    printf("��: %d\n", a*b);
    printf("������: %d\n", a/b);
}

//ȭ��� �ڵ� �ҵ�
//ȭ��ǿ� ����� ������ 5�� �Ŀ� �ڵ����� ���� ������ �ý���
//����� ���� ���� ���� ������ ������ ����,���� ȭ��ǿ� �� �� ī��Ʈ
//ī��Ʈ�� 0�� �Ǹ� 5�� �Ŀ� ���� �����ϴ�.
int counter =0;
void person_entered(){
    counter++;
    printf("���� ȭ��� �ο�: %d\n", counter);
}
void person_left(){
    counter--;
    printf("���� ȭ��� �ο�: %d\n", counter);
    if(counter ==0){
        printf("5�� �Ŀ� ���� �����ϴ�.\n");
    }
}

//��� ����ó��
//�л��� �⼮, �Ἦ, ���� �� �ϳ��� ���� ����
//�л��� ���¸� �����ϴ� �Լ��� ���� ���¸� ����ϴ� �Լ�
char *list[3] = {"�⼮", "�Ἦ", "����"};
char *student_status;
// typedef enum { �⼮, �Ἦ, ���� } Status;
// Status student_status;

void set_status(char *s) {
    student_status = s;
}

void print_status() {
    // switch (student_status) {
    //     case �⼮:
    //         printf("�л��� ����: �⼮\n");
    //         break;
    //     case �Ἦ:
    //         printf("�л��� ����: �Ἦ\n");
    //         break;
    //     case ����:
    //         printf("�л��� ����: ����\n");
    //         break;
    // }
    if (student_status == list[0]) {
        printf("�л��� ����: �⼮\n");
    } else if (student_status == list[1]) {
        printf("�л��� ����: �Ἦ\n");
    } else if (student_status == list[2]) {
        printf("�л��� ����: ����\n");
    } else {
        printf("�߸��� �����Դϴ�.\n");
    }
}

//����Ų���31 ����
// ���̽�ũ�� ���� �ý����� ����
//���̽�ũ�� �� ���� ������ 3000��.
//����ڷκ��� �� ���� ������ ������ �Է� �޾� �� ������ ����ϴ� �Լ��� �ۼ��ϼ���.
// ���� ����ڰ� 10�� �̻� �����ϸ� 10%�� ������ �����ϼ���.
int PRICE_PER_BALL = 3000; //�Ѻ� ����

void calculate_price(int balls){
    int total = balls * PRICE_PER_BALL;
    if(balls >= 10){ //10�� �̻� ����, 10���� ����
        total = total * 0.9;
    }
    printf("�� ����: %d��\n", total);
}


int main(){
    
    //���� �Լ� �׽�Ʈ
    int a,b;
    printf("���� �ΰ� �Է�: ");
    scanf("%d %d", &a, &b);
    mathOperation(a,b);

    //ȭ��� �ڵ� �ҵ� �׽�Ʈ
    for(int i=0; i<3;i++){
        person_entered();
    }    
    for(int i=0; i<3;i++){
        person_left();
    }

    //��� ����ó�� test
    set_status(list[0]);
    print_status();
    set_status((list[1]));
    print_status();

    //����Ų���31 ���� test
    printf("5�� ����: \n");
    calculate_price(5);
    printf("15�� ����: \n");
    calculate_price(15);

    
    return 0;
}